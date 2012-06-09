/*
 * TeamFactory.h
 *
 *  Created on: 8 Jun 2012
 *      Author: mikey
 */

#ifndef TEAMFACTORY_H_

#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TEAMFACTORY_H_

class TeamFactory {
public:
	TeamFactory();
	int * generateTeamStructure();
	virtual ~TeamFactory();
};

#endif /* TEAMFACTORY_H_ */
