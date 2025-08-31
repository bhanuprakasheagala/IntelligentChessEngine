#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <memory>
#include "../pieces/Piece.h"
#include "../Types.h"

namespace Chess {

    class Board {
        private:
            std::array<std::array<std::unique_ptr<Piece>, 8>, 8> m_squares; // 8x8 board representation
        
        public:
            void initializeBoard();
            const Piece* getPieceAt(Position position) const; 
            void setPieceAt(Position pos, std::unique_ptr<Piece> piece);
            void displayBoard() const;

    };
} // namespace Chess

#endif