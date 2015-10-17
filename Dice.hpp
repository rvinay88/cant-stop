//
//  Dice.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#pragma once
#include "tools.hpp"
#include <ctime>

class Dice {
private:
    int nDice;
    int *diceArray;
public:
    Dice(int n = 1) {
        nDice = n;
        diceArray = new int [ nDice ];
        srand ( (unsigned)time( NULL ) );
        cout << "Construction complete \n";
    }
    
    ~Dice() {
        delete[] diceArray;
    }
    ostream& print( ostream& sout );
    const int* roll();
    
};

inline ostream& operator<< (ostream& out, Dice& dp) {
    return out;
}