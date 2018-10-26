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

 enum Color {White, Black};

 enum PieceType
 {
   Pawn, Rook, Knight, Bishop, Queen, King
 };

 struct ChessPiece{
     enum Color color;
     enum PieceType type;
 };

 struct ChessSquare{
     bool is_occupied;
     struct ChessPiece piece;

 };

 typedef int Rank;
typedef char File;
typedef ChessSquare ChessBoard[8][8];
typedef ChessSquare Chessboard[8][8];


  //bool is_piece(struct ChessPiece board,  enum Color color, enum PieceType type);

  void  init_chess_board( ChessBoard chess_board);
  void setup_chess_board(Chessboard chess_board);
  bool is_square_occupied(ChessBoard chess_board,int file, int rank);

  struct ChessSquare* get_square(ChessBoard chess_board,int file, int rank);
 bool add_piece(ChessBoard chess_board, char file ,int rank,struct ChessPiece piece);
 struct ChessPiece get_piece(ChessBoard chess_board, char file ,int rank);
 bool remove_piece(ChessBoard chess_board, char Xpos ,int Ypos);
 bool is_piece(struct ChessPiece piece, enum Color color ,enum PieceType type);

 bool squares_share_rank(char file1, int rank1, char file2, int rank2);
 bool squares_share_file(char file1, int rank1, char file2, int rank2);
 bool squares_share_diagonal(char file1, int rank1, char file2, int rank2);

 bool squares_share_knights_move(char file1, int rank1, char file2, int rank2);
 bool squares_share_kings_move(char file1, int rank1, char file2, int rank2);
 bool squares_share_pawns_move(enum Color color, NormalMove, char file1, int rank1, char file2, int rank2);
 bool squares_share_queens_move(char file1, int rank1, char file2, int rank2);
