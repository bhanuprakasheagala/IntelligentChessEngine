#include "Board.h"
#include "../pieces/Piece.h"
#include "../pieces/Pawn.h"
#include "../types.h"
#include <iostream>
#include <memory>

namespace Chess {
    void Board::initializeBoard() {
        for(int row = 0; row < 8; ++row) {
            m_squares[1][row] = std::make_unique<Pawn>(Color::WHITE, Position{1, row});
            m_squares[6][row] = std::make_unique<Pawn>(Color::BLACK, Position{6, row});
        }
    }
}