//
//  Column.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Column.hpp"
#include <string>

const int Column::colHeights[] = { 0, 0, 3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3 };

ostream& Column::print( ostream& out )
{
    cout << colNumber << " ";
    cout << state() << "  ";
    for(int k=0;k<colLength;++k) {
        for(int z=0; z<5; z++) {
            if(markerArray[z] == k) {
                out<< colorNames[z][0];
                break;
            }// 51787073
        }
        if (k != colLength-1) {
            out << "-";
        }
    }
    return out;
}

const char* Column::state() {
    return statusNames[colState];
}

bool Column::startTower(Player *player) {
    if(state() == "AVAILABLE") {
        // Also check if the player's color isn't there already
        markerArray[0] = 0;
        return true;
    }
    else {
        return false;
    }
}

bool Column::move() {
    // Find out where the tower is
    int index = markerArray[0];

    if(index<colLength-2) {
        markerArray[0] = index+1;
        return true;
    }
    else if(index < colLength-1) {
        markerArray[0] = index+1;
        colState = 1; // set state to pending
        return true;
    }
    else {
        cout << "\nCannot perform move\n";
        return false; // Cannot move beyond the last
    }
}

void Column::stop() {
    int index = markerArray[0]; // Find out where the tower is
    cout << "The player color is" << player->color();
    // call Player::Color()
    // replace tower with appropriate tile
    // set captured
    // call Player::wonColumn() if captured
}
void Column::bust() {
    // Remove tower from column
    // Reset state to available
}