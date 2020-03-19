/*
 * multiplicateur.h
 *
 *  Created on: 19 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_MULTIPLICATEUR_H_
#define INCLUDE_MULTIPLICATEUR_H_

#include "filtre_base.h"

class multiplicateur : public filtre_base {
public:
	multiplicateur();
	virtual ~multiplicateur();
	//virtual void calculer();
	void connecter();
};

#endif /* INCLUDE_MULTIPLICATEUR_H_ */
