#ifndef TYPES_H
#define TYPES_H

namespace Chess {
    enum class Color {
        WHITE,
        BLACK
    };

    enum class PieceType {
        PAWN,
        KNIGHT,
        BISHOP,
        ROOK,
        QUEEN,
        KING
    };

    struct Position {
        int row; // 0 to 7 for rows 1 to 8
        int col; // 0 to 7 for columns 'a' to 'h'

        bool isValid() const { // Check if the position is within the bounds of the chessboard
            return row >= 0 && row < 8 && col >= 0 && col < 8;
        }

        // An equality operator to compare two positions
        bool operator==(const Position& other) const {
            return row == other.row && col == other.col;
        }
    };

} // namespace Chess

#endif