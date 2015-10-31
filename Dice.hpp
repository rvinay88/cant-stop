//
//  Dice.hpp base class
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
    int numOfDice;
    int *diceArray;
public:
    Dice(int n = 1, int n2 = 1) {
        nDice = n;
        numOfDice = n2; // number of dice
        diceArray = new int [ nDice ];
        srand ( (unsigned)time( NULL ) );
        cout << "\nConstruction complete \n";
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