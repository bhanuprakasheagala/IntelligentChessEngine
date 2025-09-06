#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"
#include "../Types.h"

namespace Chess {
    class Board; 
    class Knight : public Piece {
    public:
        Knight(Color color, Position position);

        // Override the validateMove function for Knight-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };
}

#endif