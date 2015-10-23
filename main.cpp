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

int main() {
    banner();
    puts( "C++ programs" );
    unitDice();
    unitColumn();
    unitPlayer();
    bye();
    return 0;
}
