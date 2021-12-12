using System.Collections;
using UnityEngine;

[System.Serializable]
public class Sound
{
    public string name;
    public AudioClip clip;
    private AudioSource source;

    [Range(0f,1f)]
    public float volume = 1f;
    [Range(0.5f, 1.5f)]
    public float pitch = 1f;
    [Range(0f, 2.0f)]
    public float volumeDeviation = 0.1f;
    [Range(0f, 0.5f)]
    public float pitchDeviation = 0.5f;
    public float fadeTime = 0.5f;

    public bool loop = false;

    public bool playOnAwake = false;

    public void SetSource(AudioSource inputSource)
    {
        source = inputSource;
        source.clip = clip;
        source.loop = loop;
        source.playOnAwake = playOnAwake;
    }

   
    public void Play()
    {
        source.volume = volume * (1 + Random.Range(-volumeDeviation / 2f, volumeDeviation / 2f));
        source.pitch = pitch * (1 + Random.Range(-pitchDeviation / 2f, pitchDeviation / 2f));
        source.Play();
    }

    public void PlayOneShot()
    {
        source.volume = volume * (1 + Random.Range(-volumeDeviation / 2f, volumeDeviation / 2f));
        source.pitch = pitch * (1 + Random.Range(-pitchDeviation / 2f, pitchDeviation / 2f));
        if (!source.isPlaying)
        {
            source.Play();
        }
    }

    public IEnumerator Fade()
    {
        source.volume = volume;
        while (source.volume >= 0f)
        {
            source.volume -= volume * (Time.deltaTime / fadeTime);
            yield return null;
        }
        source.volume = volume;
        source.Stop();
    }

    public void Stop()
    {
        source.Stop();
    }
}

public class AudioManager : MonoBehaviour
{
    public Sound[] sounds;
    public Transform soundContainer;
    [Range(0.0f, 1.0f)]
    public float masterVolume;

    private void Start()
    {
        masterVolume = PlayerPrefs.GetFloat("masterVolume", 0.5f);
        for (int i = 0; i < sounds.Length; i++)
        {
            GameObject go = new GameObject(sounds[i].name + " Sound");
            sounds[i].SetSource(go.AddComponent<AudioSource>());
            soundContainer = GameObject.Find("Sounds").transform;
            sounds[i].volume *= masterVolume;
        }
    }

    public void PlayAudio (string name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == name)
            {
                StopAllCoroutines();
                sounds[i].Play();
                return;
            }
        }

    }

    public void PlaySoundComplete(string name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == name)
            {
                StopAllCoroutines();
                sounds[i].PlayOneShot();
                return;
            }
        }

    }

    public void StopAudio(string name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == name)
            {
                sounds[i].Stop();
                return;
            }
        }
    }

    public void FadeAudio(string name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == name)
            {
                StartCoroutine(sounds[i].Fade());
                return;
            }
        }
    }

    public void StopAllAudio()
    {
        foreach (Sound sound in sounds)
        {
            sound.Stop();
        }
    }
}
