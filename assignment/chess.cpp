/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
#include <stdlib.h>
#include "general.h"
#include "chess.h"

void init_chess_board(ChessBoard chess_board){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      chess_board[i][j].is_occupied = false;
    }
  }
}


 void setup_chess_board(ChessBoard chess_board)
 {

 }

 bool is_square_occupied(ChessBoard chess_board, File file, Rank rank)
 {
   int int_file = file - 97;
   return chess_board[rank-1][int_file].is_occupied;
 }

 struct ChessSquare* get_square (ChessBoard chess_board, File file, Rank rank)
 {
   if((file > 'h' || file < 'a') || (rank > 8 || rank < 1))
   {
     return 0;
   }
   return &chess_board[rank-1][file-97];
 }

 bool add_piece(ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
 {
   int int_file = file - 97;
   if((file > 'h' || file < 'a') || (rank > 8 || rank < 1) || chess_board[rank-1][int_file].is_occupied)
   {
     return false;
   }
   chess_board[rank-1][int_file].is_occupied = true;
   chess_board[rank-1][int_file].piece = piece;
   return true;
 }

 struct ChessPiece get_piece(ChessBoard chess_board, File file, Rank rank)
 {
   int int_file = file - 97;
   if(((file > 'h' || file < 'a') || (rank > 8 || rank < 1)) || chess_board[rank-1][int_file].is_occupied == false)
   {
     chess_board[rank-1][int_file].piece.type = NoPiece;
     return chess_board[rank-1][int_file].piece;
   }
   else
   {
     return chess_board[rank-1][file-97].piece;
   }
 }

 bool remove_piece(ChessBoard chess_board, File file, Rank rank)
 {
   int int_file = file - 97;
   if(((file > 'h' || file < 'a') || (rank > 8 || rank < 1)) || chess_board[rank-1][int_file].is_occupied == false)
   {
     return false;
   }
   chess_board[rank-1][int_file].is_occupied = false;
   chess_board[rank-1][int_file].piece.type = NoPiece;
   return true;
 }

 bool is_piece(struct ChessPiece pc, enum Color color, enum PieceType type)
 {
   return pc.color == color && pc.type == type;
 }



  bool squares_share_knights_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    return false;
  }
  bool squares_share_pawns_move(enum Color color, enum Move move, File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    return false;
  }
  bool squares_share_queens_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    return false;
  }
  bool squares_share_kings_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    return false;
  }

  bool squares_share_file(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    if((s1_f > 'h' || s1_f < 'a') || (s2_f > 'h' || s2_f < 'a') || (s1_r > 8 || s1_r < 1) || (s2_r > 8 || s2_r < 1))
    {
      return false;
    }
    else if (s1_f == s2_f)
    {
    return true;
    }
    else
    {
      return false;
    }
  }
  bool squares_share_rank(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    if((s1_f > 'h' || s1_f < 'a') || (s2_f > 'h' || s2_f < 'a') || (s1_r > 8 || s1_r < 1) || (s2_r > 8 || s2_r < 1))
    {
      return false;
    }
    else if (s1_r == s2_r)
    {
    return true;
    }
    else
    {
      return false;
    }

  }
  bool squares_share_diagonal(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
  {
    if((s1_f > 'h' || s1_f < 'a') || (s2_f > 'h' || s2_f < 'a') || (s1_r > 8 || s1_r < 1) || (s2_r > 8 || s2_r < 1))
    {
      return false;
    }
    else if (s1_f - s2_f == s1_r - s2_r || s2_f - s1_f == s2_r - s1_r || s2_f - s1_f == s1_r - s2_r)
    {
    return true;
    }
    else
    {
      return false;
    }

  }
