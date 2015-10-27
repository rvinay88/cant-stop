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
    Cell *current; // Point to the current player
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
    void insert(Player *p);
    Player* first();
    void next();
    void remove();
};

#endif /* CList_hpp */
