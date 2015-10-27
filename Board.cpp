//
//  Board.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/25/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Board.hpp"

ostream& Board::print( ostream& out ) {
    for(int i=0; i<13; i++) {
        if(backBone[i] != NULL) {
            backBone[i]->print(cout);
        }
    }
    return out;
}

void Board::startTurn(Player *player) {
    currentPlayer = player;
    counter = 0;
}

bool move(int column) {
    if(true) {
//    if( backBone[column]->state() == 'CAPTURED' || backBone[column]->state() == 'PENDING' ) {
        return false;
    }
    else {
  //      backBone[column]->markerArray[index]
//        index = index of player->color()
        return true;
    }
}

void stop() {
    // replace all towers
    // by tiles of the right colors
    // use tower array to decide which column needs to be stopped
    // delegate action to column::stop()
}

void bust() {
    // for this player
    // how many towers
    // are bust
    // call column::bust()
}