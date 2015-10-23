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
    out << "\nPrinting column: \n";
    out << colNumber;
    out << " " << state();
    out << "  ";
    for (int k=0; k<5;++k) {
        if(markerArray[k] == 0) {
            out << "-";
        }
        else {
            out << colorNames[markerArray[k]][0]; // TODO: check if O, W etc is being printed
        }
    }
    return out;
}

const char* Column::state() {
    return statusNames[colState];
}

bool Column::startTower(Player *player) {
    if(state() == "AVAILABLE") {
        cout << "Col is available, so proceeding";
        cout << colorNames[player->color()];
        // Marker array is [7,7,7,7,7]
        //find player's color
        // see if color is there in existing marker array
        // if yes put tower there
        // else put tower in 0
        for(int k=0;k<5;++k) {
        //    if(markerArray[k] == .)
        }
        if(true) {
            
        }
        else {
            markerArray[0] = 0;
        }
        return true;
    }
    else {
        return false;
    }
    // place square in first
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