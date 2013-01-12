#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player(int, int);
        int GetxAxis();
        void SetxAxis(int);
        int GetyAxis();
        void SetyAxis(int);
        void Move();
    protected:
    private:
        int xAxis;
		int yAxis;
		int createdMove;
};

#endif // PLAYER_H
