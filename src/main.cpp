/*
 * main.cpp
 *
 *  Created on: 8 mars 2013
 *      Author: engel
 */

#include "constantes.h"
#include "enregistreur_fichier_wav.h"
#include "enregistreur_fichier_texte.h"
#include "harmonique.h"
#include "signal_constant.h"
#include "multiplicateur.h"
#include "operation_binaire.h"

void
q2_signal_constant()
{
  signal_constant constant(0.5);
  enregistreur_fichier_texte enregistreur("02_constant.txt", 1);
  enregistreur.connecterEntree(constant.getSortie(0), 0);
  // générer des valeurs
  for (unsigned int i = 0; i < 50; ++i) {
    constant.calculer();
    enregistreur.calculer();
  }
}

void
q4_harmonique()
{
  harmonique la440(440); // la 440Hz (voir fr.wikipedia.org/wiki/Note_de_musique)
  enregistreur_fichier_wav enregistreur("04_harmonique.wav", 1);	// fichier mono
  enregistreur.connecterEntree(la440.getSortie(0), 0);
  // produire 2 secondes de son
  for (unsigned long int i = 0; i < 2 * MixageSonore::frequency; ++i) {
    la440.calculer();
    enregistreur.calculer();
  }
}

void q9_multiplicateur(){
	  harmonique la440(440);
	  harmonique la880(880);
	  for (unsigned long int i = 0; i < 2 * MixageSonore::frequency; ++i) {
	    la440.calculer();
	    la880.calculer();
	  }

	  multiplicateur la;
	  la.connecterSortie(la440.getSortie(0), 0);
	  la.connecterSortie(la880.getSortie(0), 1);
	  enregistreur_fichier_wav enregistreur("09_multiplicateur.wav", 1);
	  enregistreur.connecterEntree(la.getEntree(0), 0);
	  for (unsigned long int i = 0; i < 2 * MixageSonore::frequency; ++i) {
		  la.calculer();
		  enregistreur.calculer();
	  }
}

void q11_operation_binaire(){
	  harmonique la440(440);
	  harmonique la880(880);
	  for (unsigned long int i = 0; i < 2 * MixageSonore::frequency; ++i) {
	    la440.calculer();
	    la880.calculer();
	  }

	  operation_binaire<std::multiplies<double>> la;
	  la.connecterSortie(la440.getSortie(0), 0);
	  la.connecterSortie(la880.getSortie(0), 1);
	  enregistreur_fichier_wav enregistreur("11_operation_binaire.wav", 1);
	  enregistreur.connecterEntree(la.getEntree(0), 0);
	  for (unsigned long int i = 0; i < 2 * MixageSonore::frequency; ++i) {
		  la.calculer();
		  enregistreur.calculer();
	  }
}


int
main()
{
  //q2_signal_constant();
    //q4_harmonique();
	//q9_multiplicateur();
	q11_operation_binaire();
  return 0;
}
