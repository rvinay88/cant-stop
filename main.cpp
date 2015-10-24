//
//  main.cpp
//  cant-stop
//
//  Created by Vinay  Raghu on 10/17/15.
//
//

#include "tools.hpp"
#include "Dice.hpp"
#include "Column.hpp"
#include "Player.hpp"

void unitDice() {
    // Create dice with 6 faces
    cout << "Testing Dice: \n";
    Dice testDice(6);
    testDice.roll();
    cout << "\n\nPrinting dice: \n";
    testDice.print(cout);
    cout << "\n---------\n";
    
    // Roll dice again to test values
    testDice.roll();
    testDice.print(cout);

    // Create a dice with 2 faces
    Dice testDice2(2);
    testDice2.roll();
    testDice2.print(cout);
}

void unitPlayer() {
    Player p("vinay", ORANGE);
    cout << "\nPlayer declared: \n";
    cout << "Score: " << p.score() << "\n" ;
    cout << "Color: " << p.color() << "\n" ;
}


void unitColumn() {
    cout << "\n==========\n";
    Column newC2(2);
    newC2.print(cout);
    Column newC3(3);
    newC3.print(cout);
    Column newC4(4);
    newC4.print(cout);
    Column newC5(5);
    newC5.print(cout);
    Column newC6(6);
    newC6.print(cout);
    Column newC7(7);
    newC7.print(cout);
    Column newC8(8);
    newC8.print(cout);
    Column newC9(9);
    newC9.print(cout);
    Column newC10(10);
    newC10.print(cout);
    Column newC11(11);
    newC11.print(cout);
    Column newC12(12);
    newC12.print(cout);
    cout << "\n==========\n";
    
}

void unitMove() {
    Column newC13(5);
    
    Player newP13("Stan", BLUE);
    Player *newP14 = &newP13;
    cout << "\n Start Tower:";
    newC13.startTower(newP14);
    newC13.print(cout);
    cout << " \n";
    
    // Move this player for 9 times
    // It should reflect in the output that the tower is moving
    // It should say pending when player is in last and last but one column
    
    for(int i=0; i<9; ++i) {
        newC13.move();
        newC13.print(cout);
        cout << "\n";
    }
}

void unitStop() {
    
    cout << "\n----------Testing stop()-------\n";
    
    Column newC15(3);
    
    Player newP15("Stan", GREEN);
    cout <<"\n Name: " << newP15.name() << "\n";
    Player *newP16 = &newP15;
    cout << colorNames[newP16->color()];
    cout << "\n Start Tower:";
    newC15.startTower(newP16);
    newC15.print(cout);
    cout << " \n";
    
    // Move this player for 9 times
    // It should reflect in the output that the tower is moving
    // It should say pending when player is in last and last but one column
    
    for(int i=0; i<3; ++i) {
        newC15.move();
        newC15.print(cout);
        cout << "\n";
    }
    cout << "Calling stop";
    newC15.stop();
    cout << "\nPrinting C15 now\n";
    newC15.print(cout);
    
    
    cout << "\n----------Testing stop()-------\n";
    
}

int main() {
    banner();
    puts( "C++ programs" );
    unitDice();
    unitColumn();
    unitMove();
    unitPlayer();
    unitStop();
    bye();
    return 0;
}
