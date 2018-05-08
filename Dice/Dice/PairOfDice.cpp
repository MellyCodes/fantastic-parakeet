//
//
//

#include "PairOfDice.h"






PairOfDice::PairOfDice() : 
	dre(PairOfDice::rd())  //init list
{	
	//dre(PairOfDice::rd()); //can do it this way as well
}

int PairOfDice::roll()
{
	std::uniform_int_distribution<int> di(1, 6);

	int roll1 = di(dre);
	int roll2 = di(dre);

	// if already three doubles in a row, set to 0
	// because if they are rolling again, they must
	// have been to jail and gotten out.
	_numberOfDoubleInARow = (roll1 != roll2 || _numberOfDoubleInARow == 3) ? 0 : _numberOfDoubleInARow + 1;
	return roll1 + roll2;
	
}

bool PairOfDice::isGoToJail()
{
	return (_numberOfDoubleInARow == 3);

	//return false;
}



