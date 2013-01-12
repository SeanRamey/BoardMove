#include "Board.h"
#include <iostream>

using namespace std;


Board::Board(int x, int y)
: wallTop(179), wallSide(196), player(167)              //Constants that define a character so that you don't have to remember a number in order to output
{                                                       //a certain character to the screen.
    SetxAxis(x);
    SetyAxis(y);
    SetIdiot('n');
}

void Board::SetIdiot(char ch)
{
    idiot=ch;
}

char Board::GetIdiot()
{
    return idiot;
}

void Board::PrintIdiot()
{
    cout << GetIdiot() << "\n";
}

int Board::GetxAxis()
{
    return xAxis;
}

void Board::SetxAxis(int val)
{
    if(val<39&&val!=0)                          //check if the number will make a board that is too big to fit the screen, and make sure it's not 0.
    {
        xAxis = val;
    }
    else if(val==0)
    {
        SetIdiot('y');
        cout << "You entered a letter for the X value...\n";       //somehow if you convert a letter from a string into an int, it will turn out 0
    }
    else
    {
        cout << "X value was too big. Default to 1\n";
        xAxis = 1;
    }

}

int Board::GetyAxis()
{
    return yAxis;
}

void Board::SetyAxis(int val)
{
    if(val<51&&val!=0)
    {
        yAxis = val;
    }
    else if(val==0)
    {
        SetIdiot('y');
        cout << "You entered a letter for the Y value...\n";
    }
    else
    {
        cout << "Y value was too big. Default to 1\n";
        yAxis = 1;
    }

}

void Board::Draw(int x, int y)              //x & y are player's coordinates
{
    for(int j=0; j<yAxis; j++)              //start draw loop; j = yAxis counter; i = xAxis counter
    {
        for(int i=0; i<xAxis; i++)
        {
            if(x==i && y==j)                //if player's coordinates are same as current x & y board coordinates, draw player instead of space
            {
                cout << player;
            }
            else if(i==0||i==(xAxis-1))     //draw top or side walls depending on location in board
            {
                cout << wallTop;
            }
            else
            {
                cout << wallSide;
            }
        }
        cout<< "\n";
    }
}

void Board::ClearScreen()                   //My Awesome Clear Screen Function, LOL.
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
