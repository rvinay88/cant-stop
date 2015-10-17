//
//  Dice.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Dice.hpp"

ostream& Dice::print( ostream& out )
{
    for( int k=0; k<nDice; ++k) {
        out << k+1 <<":" << diceArray[k] <<"  ";
    }
    return out;
}

const int* Dice::roll(){
    for (int k=0; k<nDice; k++) {
        diceArray[k]=(rand() % 6) + 1;
    }
    return diceArray;
}

