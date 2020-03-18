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
	int m_in;
	unsigned int m_frequence;
	double m_dephasage;
	std::shared_ptr<flot> m_sortie;

public:
	harmonique(unsigned int const frequence, double const dephasage = 0);
	virtual void calculer();
	virtual const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
	virtual ~harmonique();
protected:
	double calculerH(unsigned int indice);
};

#endif /* INCLUDE_HARMONIQUE_H_ */
