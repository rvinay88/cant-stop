//
//  Column.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//
#ifndef Column_hpp
#define Column_hpp

#include "tools.hpp"
#include "enums.hpp"
#include "player.hpp"

class Column {
private:
    int     markerArray[5] = {20,20,20,20,20};    // [0,13,0,4,0] => [WOYGB]; Initialize with any number > 15
    int     colState = 0;         //  0,1 or 2] corresponds to [A,P,C] corresponds to enum
    int     colNumber;
    int     colLength;
    Player  *player;
    static const int colHeights[];
    char* printCol[];
public:
    Column(int nCol) {
        colNumber = nCol;
        colLength = colHeights[colNumber];
        colState = 0;
    }
    ~Column() {}
    ostream& print( ostream& sout );
    const char* state();
    bool startTower(Player* player); // should be Player *player
    bool move();
    void stop();
    void bust();
    void wonColumn();
};

inline ostream& operator<< (ostream& out, Column& c) {
    return out;
}

#endif