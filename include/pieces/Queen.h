#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include "../Types.h"

namespace Chess {
    class Board; 
    class Queen : public Piece {
    public:
        Queen(Color color, Position position);

        // Override the validateMove function for Queen-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };
}

#endif