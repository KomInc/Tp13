/*
 * impflot.h
 *
 *  Created on: 18 mars 2020
 *      Author: haga2
 */

#ifndef SRC_IMPFLOT_H_
#define SRC_IMPFLOT_H_
#include "flot.h"
#include <deque>
class imp_flot: public flot {
private :
    std::deque<double> file;
public:
    imp_flot();
     void inserer(double echantillon);
     double extraire();
     bool vide()const;
     ~imp_flot();
};

#endif /* SRC_IMPFLOT_H_ */
