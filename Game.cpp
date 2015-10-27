//
//  Game.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Game.hpp"
extern const char* colorNames[5] = { "WHITE", "ORANGE", "YELLOW", "GREEN", "BLUE" };
extern const char* statusNames[3] = { "AVAILABLE", "PENDING", "CAPTURED" };

Dice d;
Player p("NewPlayer", BLUE);
Board b;