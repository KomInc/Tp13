/*
 * signal_constant.h
 *
 *  Created on: 18 mars 2020
 *      Author: inc
 */

#ifndef INCLUDE_SIGNAL_CONSTANT_H_
#define INCLUDE_SIGNAL_CONSTANT_H_

#include "producteur.h"

class signal_constant : public producteur {
private:
	float m_sc;
	std::shared_ptr<flot> m_sortie;
public:
	signal_constant(double sc);
	virtual unsigned int nbSorties() const;
	virtual const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
	virtual ~signal_constant();
	virtual void calculer();
};

#endif /* INCLUDE_SIGNAL_CONSTANT_H_ */
