#ifndef PERSONALPROJ_STRATEGO_H
#define PERSONALPROJ_STRATEGO_H

#include "board.h"

using namespace std;

class Stratego {

    public:

        /**
        * Creates a Stratego game.
        */
        Stratego();

    private:
        Board board;
        int turn;
        bool p1Ready;
        bool p2Ready;
        bool p1Win;
        bool p2Win;
};

#endif