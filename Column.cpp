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
    out << colNumber;
    out << " " << colState;
    for (int k=0; k<colLength;++k) {
        // out << print T--G-
    }
    return out;
}

const char* Column::state() {
    return statusNames[colState];
}

bool Column::startTower(int *player) { // should take in Player* player
    // get state
    // if available
    // place square in first
    // return true if legal
    // else false
    return false;
}
bool Column::move() {
    // see if player has a TILE in this column
    // see if column is not captured
    // see if the next square exists
    // remove TILE from current square
    // put TOWER in next square
    // false if move is illegal
    // true if you made the move
    return true;
}
void Column::stop() {
    // replace tower with appropriate tile
    // call Player::Color() to access the color of the tile
    // If tower was in end of column, set captured
    // call Player::wonColumn() if captured
    // retrun colstate
}
void Column::bust() {
    // Remove tower from column
    // Reset state to available
}