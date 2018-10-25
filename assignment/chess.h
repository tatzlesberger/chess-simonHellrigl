/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */

 enum Color {White, Black};
 enum PiceType {
   Pawn, Knight, Rook, Bishop, Queen, King
 };
struct ChessPiece{
  enum Color color;
  enum name ChessPiece piece;
};
  struct ChessSqare{
    bool is_occupied;
    struct ChessPiece piece;
  };

  typedef ChessSqare ChessBoard[8][8];

  bool is_piece(struct ChessPiece board,  enum Color color, enum PieceType type);

  void  init_chess_board( ChessBoard chess_board);
