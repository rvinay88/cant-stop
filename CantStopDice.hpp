//
//  CantStopDice.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/31/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#ifndef CantStopDice_hpp
#define CantStopDice_hpp

#include "Dice.hpp"

class CantStopDice : public Dice {
public:
    CantStopDice() : Dice(4, 6) {}
    const int* roll() {
        const int* rolledDice = Dice::roll();
        return rolledDice;
    }
};

#endif /* CantStopDice_hpp */
