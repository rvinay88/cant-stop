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
    out << "\nPrinting column: \n";
    out << colNumber;
    out << " " << state();
    out << "  ";
    for (int k=0; k<5;++k) {
        if(markerArray[k] == 7) {
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
        // Col is available, so proceeding
        int thisColor = player->color();
        int index = 0;
        
        for(int k=0;k<5;++k) {
            if(markerArray[k] == thisColor) {
                index = k;
            }
        }
        markerArray[index] = 0; // Place Tower in appropriate position
        return true;
    }
    else {
        return false;
    }
}

bool Column::move() {
    int index;

    // Find out where the tower is
    for(int k=0;k<5;++k) {
        if(markerArray[k]==0) {
            index = k;
        }
    }
    
    // If last but one, set to pending before move
    if(index == colLength-2) {
        colState = 1; // Set to pending
    }
    
    // Check if move is legal
    if(index == colLength-1) {
        cout << "\nCannot perform move\n";
        return false; // Cannot move beyond the last
    }

    // Perform the move
    markerArray[index] = 7;   // Reset tower to nothing
    markerArray[index+1] = 0; // Place Tower in the next column

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