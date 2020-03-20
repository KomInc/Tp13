/*
 * filtre_base.cpp
 *
 *  Created on: 19 mars 2020
 *      Author: haga2
 */

#include <filtre_base.h>

filtre_base::filtre_base(unsigned int nbSorties, unsigned int nbEntrees) :consommateur_base(nbEntrees),producteur_base(nbSorties){
	// TODO Auto-generated constructor stub

}

//const std::shared_ptr<flot> & filtre_base::getSortie(unsigned int numsortie) const{
//
//	return getEntree(numsortie);
//}

filtre_base::~filtre_base() {
	// TODO Auto-generated destructor stub
}

//void filtre_base::setLesSorties(flot* sortie){
//	m_lesSorties.push_back(sortie);
//}
