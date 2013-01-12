#include "Player.h"
#include <iostream>
#include <cstring>

using namespace std;

Player::Player(int x, int y)
{
    SetxAxis(x);
    SetyAxis(y);
    createdMove = 0;
}

int Player::GetxAxis()
{
    return xAxis;
}

void Player::SetxAxis(int val)
{
    xAxis = val;
}

int Player::GetyAxis()
{
    return yAxis;
}

void Player::SetyAxis(int val)
{
    yAxis = val;
}

void Player::Move()
{
    string move;
    cout << "up/down/left/right-move: ";
    getline(cin, move);

    if(move=="up")
    {
        SetyAxis(yAxis-1);
    }
    else if(move=="down")
    {
        SetyAxis(yAxis+1);
    }
    else if(move=="left")
    {
        SetxAxis(xAxis-1);
    }
    else if(move=="right")
    {
        SetxAxis(xAxis+1);
    }
    else
    {
        cout << "didn't do anything.\n";
    }

}




