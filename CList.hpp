//
//  CList.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/27/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#ifndef CList_hpp
#define CList_hpp

#include "Player.hpp"
#include "Cell.hpp"

class CList {
private:
    int counter;  // number of players in the list
    Cell *head;    // Head pointer
    Player *current; // Point to the current player
    Player *plist[];
public:
    CList() {
        plist[0] = NULL;
    }
    ~CList() {
        delete[] *plist;
    }
    int count() {
        return counter;
    }
    bool empty() {
        if(counter == 0) {
            return true;
        }
        else {
            return false;
        }
            
    }
    void insert(Player *p) {
        // add player to list
    }
    
    void first() {
        // set head to first Cell
        // return player in first cell
    }
    
    void remove() {
        // remove current player
        // remove corresponding cell
        // set current pointer to the next CELL if available
        // if head is being removed
        // head should be next
    }
};

#endif /* CList_hpp */
