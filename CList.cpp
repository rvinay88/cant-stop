//
//  CList.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/27/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "CList.hpp"

void CList::remove() {
    // remove current player
    // remove corresponding cell
    // set current pointer to the next CELL if available
    // if head is being removed
    // head should be next
}

Player* CList::first() {
    current = head;                 // set current pointer to cell at head
    if(head == NULL) {
        return NULL;                // check for empty list
    }
    else {
        return current->cellPlayer;     // return pointer to player in first cell
    }
}

Player* CList::next() {
    if(head == NULL) {
        return NULL;
    }
    Cell *nextCell = head->next;
    return nextCell->cellPlayer;
}

void CList::insert(Player *p) {
    Cell *c = new Cell(p);  // Create a new cell
    // First run
    if (counter == 0) {
        c->next = c; // The first one will point to itself
    }
    else {
        c->next = head->next; // The new cell's next will point to the next item in the list
    }
    head = c;               // Head will point to this new cell
    counter++;              // Increment counter
}