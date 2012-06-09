//============================================================================
// Name        : CricketManager.cpp
// Author      : MIkey
// Version     :
// Copyright   : opensource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Player.h"

using namespace std;

int main() {
	cout << "Mikey's Cricket Manager\n";

	Player p = Player();

	cout << p.getStat(Constants::CATCH_STAT) << "\n";
	cout << p.getStat(Constants::THROW_STAT) << "\n";
	cout << p.getStat(Constants::FITNESS_STAT) << "\n";
	cout << p.getStat(11) << "\n";


	return 0;
}
