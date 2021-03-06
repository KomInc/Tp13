// -*- c++ -*-

#ifndef __ENREGISTREUR_FICHIER_TEXTE__H__
#define __ENREGISTREUR_FICHIER_TEXTE__H__

#include <fstream>
#include <memory>
#include <vector>
#include "consommateur.h"
#include "constantes.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#  ifdef BUILD_DLL
#    define DLL_EXPORT __declspec(dllexport)
#  else
#     define DLL_EXPORT __declspec(dllimport)
#  endif
#else
#  define DLL_EXPORT
#endif

  ////////////////////////////////////////////////////////////////////////////////////////////////////
/// \class enregistreur_fichier_texte
///
/// \brief Un consommateur qui enregistre ses entrées dans un fichier texte ; 
///			   une ligne = un échantillon de chaque canal
///
/// \author	Jean Christophe Engel, Fabrice Lamarche, University Of Rennes 1
/// \date	23/04/2010
////////////////////////////////////////////////////////////////////////////////////////////////////
// enregistrer un flux dans un fichier texte
class enregistreur_fichier_texte : public consommateur
{
public:
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  /// \fn enregistreur_fichier_texte(std::string nf, unsigned int nbc)
  ///
  /// \brief initialise le flux de sortie
  ///
  /// \param nf  : nom du fichier de sortie
  /// \param nbc : nombre de canaux (1 = mono, 2 = stéréo)
  DLL_EXPORT enregistreur_fichier_texte(std::string nf, unsigned int nbc);

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  /// \fn virtual ~enregistreur_fichier_texte();
  ///
  /// \brief	Destructeur virtuel. ; ferme le fichier
  ///
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  virtual DLL_EXPORT ~enregistreur_fichier_texte();

  /// \return	Le nombre d'entrees du composant. 
  unsigned int DLL_EXPORT nbEntrees() const;

  /// \return	L'entrée demandée. 
  virtual const std::shared_ptr<flot> & DLL_EXPORT
  getEntree(unsigned int numentree) const;

  /// \brief	Connecte une entrée sur ce composant. 
  ///
  /// \param	f		Le flot à connecter en entrée du composant. 
  /// \param	numentree	Le numéro de l'entree sur laquelle connecter le flot.
  ///
  /// \pre    0 <= numentree < nbEntrees()
  virtual void DLL_EXPORT connecterEntree(const std::shared_ptr<flot> & f, unsigned int numentree);

  /// \return	Vrai si chaque entrée possède au moins un échantillon.
  virtual bool DLL_EXPORT yaDesEchantillons() const;

  /// \brief	Effectue les calculs associes au composant. 
  virtual void DLL_EXPORT calculer();

private:
  // attributs du consommateur
  int				  m_nbE;
  std::vector<std::shared_ptr<flot> > m_lesEntrees;

private:
  // attributs propres
  std::string	m_nomFichier;		// fichier de sortie
  std::ofstream m_fluxSortie;
};

#ifdef __cplusplus
}
#endif

#endif // __ENREGISTREUR_FICHIER_TEXTE__H__
