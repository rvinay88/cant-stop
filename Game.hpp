//
//  Game.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//
#include "tools.hpp"
#include "Dice.hpp"

class Game {
private:
    Dice *gameDice;
public:
    Game();
    ~Game();
};