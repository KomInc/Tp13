/*
 * producteurbase.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#include <producteur_base.h>
#include <cassert>
#include "imp_flot.h"

producteur_base::producteur_base(unsigned int nbSortie)  {
	for(unsigned int i(0); i<nbSortie; i++) {
		std::shared_ptr<flot> ptr(new imp_flot());
		m_lesSorties.push_back(ptr);
	}
}


unsigned int producteur_base::nbSorties() const{
	return m_lesSorties.size();
}
const std::shared_ptr<flot> & producteur_base::getSortie(unsigned int numsortie) const{
	assert((0 <= numsortie) && (numsortie < nbSorties()));

	return m_lesSorties[numsortie];
}

void producteur_base::connecterSortie(const std::shared_ptr<flot> & sortie, unsigned int numsortie){
	assert((0 <= numsortie) && (numsortie < nbSorties()));
	m_lesSorties[numsortie] = sortie;
}

producteur_base::~producteur_base() {
	// TODO Auto-generated destructor stub
}

