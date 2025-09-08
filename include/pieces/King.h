#ifndef KING_H
#define KING_H

#include "Piece.h"
#include "../Types.h"

namespace Chess {
    class Board; 
    class King : public Piece {
    public:
        King(Color color, Position position);

        // Override the validateMove function for King-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };
}

#endif