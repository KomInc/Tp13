/*
 * producteurbase.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#include <producteur_base.h>
#include <cassert>

producteur_base::producteur_base()  {
	// TODO Auto-generated constructor stub

}

unsigned int producteur_base::nbSorties() const{
	return m_lesSorties.size();
}
const std::shared_ptr<flot> & producteur_base::getSortie(unsigned int numsortie) const{
	assert((0 <= numsortie) && (numsortie < nbSorties()));

	return m_lesSorties[numsortie];
}

void producteur_base::connecterSortie(std::shared_ptr<flot> sortie, unsigned int numsortie){
	assert((0 <= numsortie) && (numsortie < nbSorties()));
	sortie = m_lesSorties[numsortie];
}

producteur_base::~producteur_base() {
	// TODO Auto-generated destructor stub
}

