//
//
//
#pragma once
#include <random>


class PairOfDice
{
public:
	PairOfDice();
	
	int roll();
	bool isGoToJail();

private:
	int _numberOfDoubleInARow;

	std::random_device rd;
	std::default_random_engine dre;
	
};

