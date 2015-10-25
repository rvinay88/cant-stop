//
//  Player.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/23/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Player.hpp"

ostream& Player::print( ostream& out )
{
    out << playerName;
    out << playerColor;
    return out;
}

bool Player::wonColumn(int number) {
    int wins = 0; // internal variable just for this loop
    // see all values in scoreboard
    for (int i=0; i<3; i++) {
        if(scoreboard[i] !=0) {
            wins++;
        }
    }
    // if 2 values already exist
    switch(wins) {
        case 0: // No wins so far
            scoreboard[0] = number;
            playerScore++;
            return false;
        case 1: // 1 win so far
            scoreboard[1] = number;
            playerScore++;
            return false;
        case 2: // 2 wins already this is the third win
            scoreboard[2] = number;
            playerScore++;
            return true;
    }
    return true; // this line will never execute. it's here to satisfy the compiler
}

int Player::score() {
    playerScore = 0;
    for (int i=0; i<3; i++) {
        if(scoreboard[i] !=0) {
            playerScore++;
        }
    }
    return playerScore;
}