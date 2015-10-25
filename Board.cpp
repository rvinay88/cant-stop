//
//  Board.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/25/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#include "Board.hpp"

ostream& Board::print( ostream& out ) {
    for(int i=0; i<13; i++) {
        if(backBone[i] != NULL) {
            backBone[i]->print(cout);
        }
    }
    return out;
}