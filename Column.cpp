//
//  Column.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Column.hpp"

const int Column::colHeights[] = { 0, 0, 3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3 };

ostream& Column::print( ostream& out )
{
//    for( int k=0; k<nDice; ++k) {
//        out << k <<":" << diceArray[k] <<"  ";
//    }

    return out;
}

char Column::getState() {
    // should return state of current column
    return 'a';
}

bool Column::startTower () { // should take in Player* player
    // should place tower in approprate square for given player
    // return true if legal
    // else false
    return false;
}
bool Column::move() {
    //advance tower one square in the column
    // false if move is illegal
    // true if you made the move
    return true;
}
void Column::stop() {
    // replace tower with appropriate tile
    // call Player::Color() to access the color of the tile
    // If captured, set captured
    // call Player::wonColumn() if captured
}
void Column::bust() {
    // Remove tower from column
    // Reset state to available
}