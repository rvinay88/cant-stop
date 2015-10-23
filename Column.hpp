//
//  Column.hpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//  Copyright © 2015 Vinay  Raghu. All rights reserved.
//
#include "tools.hpp"

class Column {
private:
    int  markerArray[5];    // [0,1,0,4,0] [TOYGB]
    int  colState;       //  [0,1,2] corresponds to [A,P,C] corresponds to enum
    int  colNumber;
    int  colLength;
    int  *player;           // will change to Player *player;
    static const int colHeights[];
public:
    Column(int nCol) {
        colLength = colHeights[nCol];
//        colState = state['A'];
    }
    ~Column() {}
    ostream& print( ostream& sout );
    int state();
    bool startTower(int* player); // should be Player *player
    bool move();
    void stop();
    void bust();
};

inline ostream& operator<< (ostream& out, Column& c) {
    return out;
}