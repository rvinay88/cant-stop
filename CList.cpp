//
//  CList.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/27/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "CList.hpp"

void CList::remove() {
    Cell *cellToRemove = head;
    Cell* prev = NULL;
    int i=0;
    if(!(head->cellPlayer == current)) {
        do {
            prev = cellToRemove;
            cellToRemove = cellToRemove->next;
        }
        while(cellToRemove->cellPlayer != current); // Keep moving down the list until we find the cell that holds the current player
        prev->next = cellToRemove->next; // reset the links
        delete cellToRemove->cellPlayer;
        delete[] cellToRemove;
    }
    else {
        // handle head is current possibility
        head = NULL;
        head->next = NULL;
        delete cellToRemove->cellPlayer;
        delete[] cellToRemove;
    }
}

Player* CList::first() {
    current = head->cellPlayer;      // set current pointer to cell at head
    if(head == NULL) {
        return NULL;                // check for empty list
    }
    else {
        return current;     // return pointer to player in first cell
    }
}

Player* CList::next() {
    if(head == NULL) {
        return NULL;
    }
    Cell *nextCell = head->next; // Find where next points to
    return nextCell->cellPlayer; // Return the player pointer stored in that cell
}

void CList::insert(Player *p) {
    Cell *c = new Cell(p);  // Create a new cell
    // if first run
    if (counter == 0) {
        c->next = c; // The next on the first Cell will point to itself
    }
    else {
        c->next = head->next; // The new cell's next will point to the next item in the list
    }
    head = c;               // Head will point to this new cell
    counter++;              // Increment counter
}