//
//  Column.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//
#include "tools.hpp"
#include "enums.hpp"
#include "player.hpp"

class Column {
private:
    int     markerArray[5] = {0,0,0,0,0};    // [0,1,0,4,0] [TOYGB]
    int     colState = 0;         //  0,1 or 2] corresponds to [A,P,C] corresponds to enum
    int     colNumber;
    int     colLength;
    Player  *player;
    static const int colHeights[];
public:
    Column(int nCol) {
        colNumber = nCol;
        colLength = colHeights[colNumber];
        colState = 0;
    }
    ~Column() {}
    ostream& print( ostream& sout );
    const char* state();
    bool startTower(int* player); // should be Player *player
    bool move();
    void stop();
    void bust();
};

inline ostream& operator<< (ostream& out, Column& c) {
    return out;
}