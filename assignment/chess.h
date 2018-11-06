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
#include <stdbool.h>
 #ifndef ___CHESS_H
 #define ___CHESS_H
 enum Move{ NormalMove, CaptureMove};
 enum Color {White, Black};
 enum PieceType {
   Pawn, Knight, Rook, Bishop, Queen, King, NoPiece
 };

 struct ChessPiece{
     enum Color color;
     enum PieceType type;

 };
struct ChessSquare{
   bool is_occupied;
   struct ChessPiece piece;
   //enum PieceType NoPiece;

};

typedef int Rank;
typedef char File;
typedef ChessSquare ChessBoard[8][8];






  void  init_chess_board( ChessBoard chess_board);
  void setup_chess_board(ChessBoard chess_board);

  bool is_square_occupied(ChessBoard chess_board, File file,  Rank rank);
  struct ChessSquare* get_square(ChessBoard chess_board,File file,  Rank rank);
  bool add_piece(ChessBoard chess_board, File file ,int rank,struct ChessPiece chess_piece);
  struct ChessPiece get_piece(ChessBoard chess_board, File file , Rank rank);
  bool remove_piece(ChessBoard chess_board, File file, Rank rank);
  bool is_piece(struct ChessPiece piece, enum Color color ,enum PieceType type);

  bool squares_share_rank(File file1,  Rank rank1, File file2,  Rank rank2);
  bool squares_share_file(File file1,  Rank rank1, File file2,  Rank rank2);
  bool squares_share_diagonal(File file1,  Rank rank1, File file2,  Rank rank2);

  bool squares_share_knights_move(File file1, Rank rank1, File file2,  Rank rank2);
  bool squares_share_kings_move(File file1,  Rank rank1, File file2,  Rank rank2);
  bool squares_share_pawns_move(enum Color color,enum Move NormalMove, File file, Rank rank, File file1, Rank rank1);
  bool squares_share_queens_move(File file1,  Rank rank1, File file2,  Rank rank2);

  #endif
