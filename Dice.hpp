//
//  Dice.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#pragma once
#include "tools.hpp"

class Dice {
private:
    int nDice;
    int *diceArray;
public:
    Dice( int n = 1 ) {
        nDice = n;
        diceArray = new int [ nDice ];
    }
    
};