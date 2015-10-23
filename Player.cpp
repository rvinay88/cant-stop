//
//  Player.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/23/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Player.hpp"

bool Player::wonColumn(int number) {
    // see all values in scoreboard
    // if 2 values already exist
    // then this is the third value and player wins
    // index = first instance of zero array
    int index = 2; // temp
    scoreboard[index] = number;
    if (index == 2) {
        return true;
    }
    else {
        return false;
    }
}

int Player::score() {
    return playerScore;
}