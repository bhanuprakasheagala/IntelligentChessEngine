# **`/include`**

This directory contains all the header files (`.h` or `.hpp`) for the **Intelligent Chess Engine** project. The headers define the **declarations** and **public interfaces** for all classes and functions used in the application.

By separating declarations from implementations (`.cpp` files in the `src` directory), we achieve a clean, modular, and well-organized codebase. This practice also significantly speeds up compilation times for large projects.

---

### **Directory Structure**

The files in this directory are organized into logical sub-directories to reflect the project's **Component-Based Architecture**.

* **`components/`**: This sub-directory holds the header files for the core components of the chess engine. These are the central classes that manage the overall game state and logic.
    * `Board.h`: The class declaration for the chessboard, responsible for representing the game state.
* **`pieces/`**: This is where the header files for all the specific chess pieces reside. Each file defines a concrete piece class that inherits from the `Piece` base class.
    * `Piece.h`: The abstract base class that defines the common interface for all chess pieces. This is where **polymorphism** is established.
    * `Bishop.h`, `King.h`, `Knight.h`, `Pawn.h`, `Queen.h`, `Rook.h`: Individual piece classes that implement the specific move validation logic for each piece type.
* **`ai/`**: *(Planned for a later phase)*. This directory will contain headers for the AI-related classes, such as the Minimax algorithm and evaluation functions.
* `types.h`: A general header file containing common data types, `enum class` definitions (like `Color` and `PieceType`), and `struct` declarations (like `Position`) that are used throughout the project.

This clear separation makes it easy to navigate the codebase and understand the relationships between different parts of the chess engine at a glance.
