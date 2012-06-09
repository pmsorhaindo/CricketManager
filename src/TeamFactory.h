/*
 * TeamFactory.h
 *
 *  Created on: 8 Jun 2012
 *      Author: mikey
 */

#ifndef TEAMFACTORY_H_

#include "Player.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TEAMFACTORY_H_

class TeamFactory {
public:
	struct TeamStructure {
		int wicketKeepers;
		int bowlers;
		int batters;
		int nearFielders;
		int outFielders;
	};
	TeamFactory();
	TeamFactory::TeamStructure generateTeamStructure();
	virtual ~TeamFactory();
};

#endif /* TEAMFACTORY_H_ */
