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
	std::set<std::shared_ptr<flot>>::const_iterator it = m_lesSorties.begin();
	unsigned int i(0);
	while (i < numsortie){
		++it;
		++i;
	}
	return *(it);
}



producteur_base::~producteur_base() {
	// TODO Auto-generated destructor stub
}

