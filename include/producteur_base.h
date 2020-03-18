/*
 * producteur_base.h
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_PRODUCTEUR_BASE_H_
#define INCLUDE_PRODUCTEUR_BASE_H_

#include "producteur.h"
#include <set>

class producteur_base : virtual producteur {
private:
	std::set<std::shared_ptr<flot>> m_lesSorties;
public:
	producteur_base();
	virtual unsigned int nbSorties() const;
	virtual const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
	virtual void calculer() = 0;
	virtual ~producteur_base();

protected:
	virtual void connecterSortie() = 0;
};

#endif /* INCLUDE_PRODUCTEUR_BASE_H_ */
