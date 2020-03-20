/*
 * filtre_base.h
 *
 *  Created on: 19 mars 2020
 *      Author: haga2
 */

#ifndef INCLUDE_FILTRE_BASE_H_
#define INCLUDE_FILTRE_BASE_H_
#include "consommateur_base.h"
#include "producteur_base.h"
#include"filtre.h"
class filtre_base: public filtre, public consommateur_base, public producteur_base {
public:
	filtre_base(unsigned int nbSorties, unsigned int nbEntrees);
	//virtual const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
	virtual ~filtre_base();
};

#endif /* INCLUDE_FILTRE_BASE_H_ */
