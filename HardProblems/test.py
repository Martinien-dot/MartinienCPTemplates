from scipy.io.wavfile import write
import sounddevice as sd

def enregistrer_audio(filename, duree, frequence_echantillonnage):
    print("Enregistrement audio en cours...")
    enregistrement = sd.rec(int(duree * frequence_echantillonnage), samplerate=frequence_echantillonnage, channels=2, dtype='int16')
    sd.wait()
    print("Enregistrement terminé.")
    write(filename, frequence_echantillonnage, enregistrement)

if __name__ == "__main__":
    nom_fichier = "enregistrement.wav"  # Nom du fichier de sortie
    duree_enregistrement = 20  # Durée de l'enregistrement en secondes
    frequence_echantillonnage = 44100  # Fréquence d'échantillonnage en Hz

    enregistrer_audio(nom_fichier, duree_enregistrement, frequence_echantillonnage)
