#include <iostream>
#include "Board.h"
#include "Player.h"
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    int xTemp, yTemp;
    string str_xTemp, str_yTemp;
    string exitLoop="no";



    cout << "Enter a number for the x axis: \n";            //get player's desired size for board
    getline(cin, str_xTemp);
    cout << "Enter a number for the y axis: \n";
    getline(cin, str_yTemp);
    stringstream(str_xTemp) >> xTemp;                       //convert input from a string to an int
    stringstream(str_yTemp) >> yTemp;
    Board NewBoard(xTemp, yTemp);                           //create new board from input
    Player Player1(xTemp/2, yTemp/2);                       //create new player object in center of board
    NewBoard.Draw(Player1.GetxAxis(), Player1.GetyAxis());  //draw the board and player
    cout << xTemp << "," << yTemp << "\n\n";                //display total board size

    NewBoard.PrintIdiot();                                  //check if player is idiot, if he is then tell him so... ;P
    if(NewBoard.GetIdiot()!='y')                            //make sure he isn't an idiot before continueing
    {
        do                                                  //run the main loop at least once
        {
            Player1.Move();                                             //get player's movement
            NewBoard.ClearScreen();                                     //clear the screen
            NewBoard.Draw(Player1.GetxAxis(), Player1.GetyAxis());      //redraw updated board
            cout << Player1.GetxAxis() << "," << Player1.GetyAxis();    //display player's coordinates
            cout << "\n\n";                                             //make some space so is doesn't look jumbled
            cout << "Do you want to quit? yes/no or hit enter to continue: ";   //check if user wants to quit
            getline(cin, exitLoop);
        }while(exitLoop!="yes");                                                //if yes, exit. if no, loop again.
    }
    return 0;                                                                   //end of program...
}
