#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"
#include "../Types.h"

namespace Chess {
    class Board; 
    class Bishop : public Piece {
    public:
        Bishop(Color color, Position position);
        
        // Override the validateMove function for Bishop-specific movement rules
        bool validateMove(Position start, Position end, const Board& board) const override;
    };
}

#endif