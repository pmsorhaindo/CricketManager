/*
 * TeamFactory.cpp
 *
 *  Created on: 8 Jun 2012
 *      Author: mikey
 */

#include "TeamFactory.h"

TeamFactory::TeamFactory() {
	// TODO Generate a Team of 22

	srand ( time(NULL) );
	std::cout << "rand() test " << rand() << "\n";

	// Decide Team Quality
	// 2/10 World Class, 3/10 Good, 4/10, Average, 1/10 Below Average
	int tClass = rand() % 10 + 1;

	switch (tClass) // TODO Ask SO if this can be neater
	{
		case 1:
		case 2:
			//createWorldClassTeam;
			break;
		case 3:
		case 4:
		case 5:
			//createGoodTeam;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			//createAverageTeam;
			break;
		default:
			//createBelowAverageTeam;
			break;
	}
	//World Class	- 4 gifted 6 bta 6 aa
	//Good			- 2 gifted 4 bta  8 aa
	//Average		- 1 gifted 4 bta 6 aa
	//Below Average	- 4 bta 6 aa


	// aa = above average
	// jaa = just above average
	// btw = better than average
	// 2 / 11 players will be gifted
	// 4 / 11 players will be bowlers
	// 2 / 11 players will be bta bowlers
	//
	// World Class 		{Australia, England,  India,  New Zealand,  Pakistan,
	//						Sri Lanka,  West Indies}
	// Good 			{ Canada, Zimbabwe, South Africa, Bangladesh }
	// Average 			{ Kenya,  Netherlands,  United Arab Emirates, Scotland,
	//						East Africa, }
	// Below Average 	{ Namibia,  Bermuda,  Ireland }

}

TeamFactory::~TeamFactory() {
	// TODO Auto-generated destructor stub
}

TeamFactory::generateTeamStructure() {

	//WicketKeepers>=1
	//Bowlers >=2
	//Batters >=3

	//Everyone fields
	//Near Fielder >=7
	//Out Fielders >=8

}
