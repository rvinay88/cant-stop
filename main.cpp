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

void unitColumn() {
    cout << "\n";
    Column newC2(2);
    cout << "\n";
    Column newC3(3);
    cout << "\n";
    Column newC4(4);
    cout << "\n";
    Column newC5(5);
    cout << "\n";
    Column newC6(6);
    cout << "\n";
    Column newC7(7);
    cout << "\n";
    Column newC8(8);
    cout << "\n";
    Column newC9(9);
    cout << "\n";
    Column newC10(10);
    cout << "\n";
    Column newC11(11);
    cout << "\n";
    Column newC12(12);
    cout << "\n";
    
}

void unitPlayer() {
    Player p("vinay", ORANGE);
    cout << "\nPlayer declared: \n";
    cout << "Score: " << p.score() << "\n" ;
    cout << "Color: " << p.color() << "\n" ;
    
    Player p2("vinay", YELLOW);
    cout << "\nPlayer declared: \n";
    cout << "Score: " << p2.score() << "\n" ;
    cout << "Color: " << p2.color() << "\n" ;
    
    
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
