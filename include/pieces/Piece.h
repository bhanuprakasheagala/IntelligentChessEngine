#ifndef PIECE_H
#define PIECE_H

#include "../Types.h"

class Board; // Forward declaration of Board class to avoid circular dependency

namespace Chess {
    
    class Piece {
    private:
        Color m_color;
        PieceType m_type;
        Position m_position;

    public:
        Piece(Color color, PieceType type, Position position);

        // Pure Virtual function to be implemented by derived classes
        // Note: Const reference to a Board to check for obstacles
        virtual bool validateMove(Position start, Position end, const Board& board) const = 0;

        // Getters for color and type
        Color getColor() const;
        PieceType getType() const;
        Position getPosition() const;

        // Setter for position
        void setPosition(Position newPosition);
    };

} // namespace Chess

#endif