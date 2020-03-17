// -*- c++ -*-

#ifndef __WAVE_HEADER__H__
#define __WAVE_HEADER__H__

struct wave_header {
  // Bloc de déclaration d'un fichier au format WAVE
  char ChunkID[4];			// "RIFF"
  // Taille du fichier moins 8 octets
  unsigned int ChunkSize;
  char Format[4];			// "WAVE"

  // Bloc décrivant le format audio
  char Subchunk1ID[4];			// "fmt "
  // Nombre d'octets du bloc - 8  (0x10)
  unsigned int  Subchunk1Size;		// 16 for PCM
  // Format du stockage dans le fichier (1: PCM, ...)
  unsigned short int AudioFormat;
  // Nombre de canaux (de 1 à 6)
  unsigned short int NumChannels;
  // Fréquence d'échantillonnage (en hertz)
  unsigned int  SampleRate;
  // Nombre d'octets à lire par seconde = SampleRate * BlockAlign
  unsigned int  ByteRate;
  // Nombre d'octets par bloc d'échantillonnage = NumChannels * BitsPerSample/8)
  unsigned short int BlockAlign;
  // Nombre de bits utilisés pour le codage de chaque échantillon
  unsigned short int BitsPerSample;

  // Bloc des données
  char Subchunk2ID[4];			// "data"
  // Nombre d'octets de données : taille_du_fichier - taille_de_l'entête
  unsigned int  Subchunk2Size;
};


#endif // __WAVE_HEADER__H__
