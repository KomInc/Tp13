/*
 * harmonique.h
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_HARMONIQUE_H_
#define INCLUDE_HARMONIQUE_H_

#include "producteur_base.h"
#include "constantes.h"

class harmonique : producteur_base {
private:
	unsigned int m_frequence;
	double m_dephasage;
public:
	harmonique(unsigned int const frequence, double const dephasage = 0);
	virtual void calculer();
	virtual ~harmonique();
};

#endif /* INCLUDE_HARMONIQUE_H_ */
