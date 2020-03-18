/*
 * impflot.cpp
 *
 *  Created on: 18 mars 2020
 *      Author: haga2
 */

#include "imp_flot.h"
#include <cassert>
imp_flot::imp_flot()
     {
    // TODO Auto-generated constructor stub

}

double imp_flot::extraire() {
    assert(!vide());
    double temp=file.front();
    file.pop_front();
    return temp;
}

void imp_flot::inserer(double echantillon) {
    file.push_back(echantillon);
}
imp_flot::~imp_flot() {
    // TODO Auto-generated destructor stub
}

bool imp_flot::vide() const {
    return file.size()== 0;
}
