/*
 * filtre_compose.cpp
 *
 *  Created on: 20 mars 2020
 *      Author: inc
 */

#include <filtre_compose.h>

filtre_compose::filtre_compose(const unsigned int nbSorties,
		const unsigned int nbEntrees) :
		filtre_base(nbSorties, nbEntrees) {
	connexionEntreesInternes();
	connexionSortiesInternes();

}

void filtre_compose::addComposant(const std::shared_ptr<filtre_base> & f){
	m_lesComposants.push_back(f);
}


void filtre_compose::connexionEntreesInternes(){

	for(unsigned int i(0); i < m_lesAssoEntrees.size(); i++){
		unsigned int numentree = m_lesAssoEntrees[i][0];
		unsigned int numcomposant = m_lesAssoEntrees[i][1];
		unsigned int numcomposantentree = m_lesAssoEntrees[i][2];
		m_lesComposants[numcomposant]->connecterEntree(m_lesEntrees[numentree], numcomposantentree);
	}

}

void filtre_compose::connexionSortiesInternes(){
	for(unsigned int i(0); i < m_lesAssoSorites.size(); i++){
		unsigned int numsortie = m_lesAssoSorites[i][0];
		unsigned int numcomposant = m_lesAssoSorites[i][1];
		unsigned int numcomposantsortie = m_lesAssoSorites[i][2];
		connecterSortie(m_lesComposants[numcomposant]->getSortie(numcomposantsortie), numsortie);
	}

}

void filtre_compose::connecterEntree(const std::shared_ptr<flot> &f, unsigned int numentree){
	filtre_base::connecterEntree(f, numentree);
}

filtre_compose::~filtre_compose() {
	// TODO Auto-generated destructor stub
}

