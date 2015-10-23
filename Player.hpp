//
//  Player.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/23/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "enums.hpp"

class Player {
private:
    char* playerName;
    ColorENum playerColor;
    int playerScore; // num of columns this player has captured
    int scoreboard[3] = {0,0,0}; // array of captured columns
public:
    Player(char* name, ColorENum color) {
        playerName = name;
        playerColor = color;
        playerScore = 0;        // Initially score is 0
    }
    ~Player() {}
    ColorENum color() {
        return playerColor;
    }
    bool wonColumn(int number);
    int score();
};