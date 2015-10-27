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
    int towerCount[3] = {0,0,0};
    Column* backBone[13];
    Player *currentPlayer;
public:
    Board() {
        for(int k=0; k<13; ++k) {
            if(k==0 || k==1) {
                backBone[k] = NULL;
            }
            else {
                backBone[k] = new Column(k);
            }
        }
    }
    bool move(int column);
    ostream& print( ostream& sout );
    void startTurn(Player *player);
    void stop();
    void bust();
};

#endif /* Board_hpp */
