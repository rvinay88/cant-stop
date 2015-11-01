//
//  FakeDice.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 11/1/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#ifndef FakeDice_hpp
#define FakeDice_hpp

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "CantStopDice.hpp"

class FakeDice : public CantStopDice {
private:
    std::ifstream myFile;
    string line;
public:
    FakeDice() {
        myFile.open("infile.txt");
    }
    const int* roll() {
        for(int k=0; k<Dice::nDice; k++) {
            while(std::getline(myFile, line)) {
                myFile >> diceArray[k];
            }
        }
        myFile.close();
        return diceArray;
    }
    
};

#endif /* FakeDice_hpp */
