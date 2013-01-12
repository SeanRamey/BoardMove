#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board(int,int);
        int GetxAxis();
        void SetxAxis(int);
        int GetyAxis();
        void SetyAxis(int);
        void Draw(int x, int y);
        void ClearScreen();
        void SetIdiot(char);
        char GetIdiot();
        void PrintIdiot();

    protected:
    private:
        int xAxis;
        int yAxis;
        char idiot;
        const char wallTop;
        const char wallSide;
        const char player;
};

#endif // BOARD_H
