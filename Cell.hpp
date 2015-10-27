//
//  Cell.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/27/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#ifndef Cell_hpp
#define Cell_hpp
#include "Player.hpp"

class Cell {
private:
    Player *cellPlayer;
    Cell *link;
    Cell(Player *cellPlayer, Cell *link = NULL) {
        link = link;
        cellPlayer = cellPlayer;
    }
    ~Cell() {
        delete[] cellPlayer;
    }
    friend class CList; // give friendship
};

#endif /* Cell_hpp */
