#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"
#include "../Types.h"
namespace Chess {
    class Board; 
    class Rook : public Piece {
    public:
        Rook(Color color, Position position);

        // Override the validateMove function for Rook-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };

} // namespace Chess

#endif