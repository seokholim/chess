#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include "cell.h"

class Board {
    std::vector<std::vector<Cell>> grid; // 8 x 8

  public:
    Board();
    void set_piece_at(Piece* p, Position pos);
    Piece* get_piece_at(Position pos);
    std::string get_piece_type_string_at(Position pos);
    PieceType get_piece_type_at(Position pos);
    bool empty_at(Position pos);
    void print();
};

#endif