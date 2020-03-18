/*
 * producteur_base.h
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_PRODUCTEUR_BASE_H_
#define INCLUDE_PRODUCTEUR_BASE_H_

#include "producteur.h"
#include <vector>

class producteur_base : virtual producteur {
protected:
	std::vector<std::shared_ptr<flot>> m_lesSorties;
public:
	producteur_base();
	virtual unsigned int nbSorties() const;
	virtual const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
	virtual void calculer() = 0;
	virtual ~producteur_base();

protected:
	virtual void connecterSortie(std::shared_ptr<flot> sortie, unsigned int numsortie);
};

#endif /* INCLUDE_PRODUCTEUR_BASE_H_ */
