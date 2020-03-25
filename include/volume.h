/*
 * volume.h
 *
 *  Created on: 20 mars 2020
 *      Author: haga2
 */

#ifndef SRC_VOLUME_H_
#define SRC_VOLUME_H_

#include "signal_constant.h"
#include "filtre_base.h"
#include "multiplicateur.h"

class volume: public filtre_base {
private:
	std::shared_ptr<signal_constant> s_constant;
	std::shared_ptr<multiplicateur> m_multiplicateur;
public:
	volume(double signal);
	virtual void calculer();
	void connecterEntree(const std::shared_ptr<flot> &f, unsigned int numentree);
	virtual ~volume();
};

#endif /* SRC_VOLUME_H_ */
