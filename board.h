#ifndef PERSONALPROJ_BOARD_H
#define PERSONALPROJ_BOARD_H

#include <string>
#include <iostream>

#include "piece.h"

using namespace std;

class BoardSpot {
    public:
        /**
        * Creates a Stratego board.
        */
        BoardSpot() {

        }


    private:
        string status;
        Piece* piece;

};

class Board {
    public:
        /**
        * Creates a Stratego board.
        */
        Board();

    private:
        BoardSpot* upperLeft;
        BoardSpot* upperRight;
        BoardSpot* lowerLeft;
        BoardSpot* lowerRight;
};

#endif