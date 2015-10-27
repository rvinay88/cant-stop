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
    int counter;     // number of players in the list
    Cell *head;      // Head pointer
    Player *current; // Point to the current player
    Cell *list[];    // An array of pointers to cells
public:
    CList() {
        counter = 0;
        head = NULL;
    }
    ~CList() {}
    
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
    Player* next();
    void remove();
};

#endif /* CList_hpp */
