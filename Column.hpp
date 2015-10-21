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
    int markerArray[5]; // check if it's really int
    char state[5]; // AVAIL, PENDN, CPTRD
    int colNumber;
    int colLength;
    int *player; // will change to Player *player;
    static const int colHeights[];
public:
    Column(int nCol) {
        
    }
    ~Column() {}
    ostream& print( ostream& sout );
    char getState();
    bool startTower ();
    bool move();
    void stop();
    void bust();
};

inline ostream& operator<< (ostream& out, Column& c) {
    return out;
}