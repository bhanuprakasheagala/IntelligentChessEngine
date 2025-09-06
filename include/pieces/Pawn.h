#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"
#include "../Types.h"

namespace Chess {
    class Board; 
    class Pawn : public Piece {
    public:
        Pawn(Color color, Position position);

        // Override the validateMove function for Pawn-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };

} // namespace Chess

#endif