//
//  Board.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/25/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include "tools.hpp"
#include "player.hpp"
#include "column.hpp"

class Board {
private:
    int counter; // how many towers
    Column* backBone[13];
    Player *player;
public:
    Board() {
        for(int k=0; k<13; ++k) {
            if(k==0) {
                backBone[k] = NULL;
            }
            else {
                backBone[k] = new Column(k);
            }
        }
    }
};

#endif /* Board_hpp */
