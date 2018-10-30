/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			test_chess.h
 * Author:			P. Bauer
 * Due Date:		November 9, 2010
 * ----------------------------------------------------------
 * Description:
 * Test functions for chess.
 * ----------------------------------------------------------
 */
#ifndef ___CHESS_TEST_H
#define ___CHESS_TEST_H


#include "shortcut.h"

TEST(test_is_piece);
TEST(test_init_chess_board);
TEST(test_get_square);
TEST(test_is_square_occupied);
TEST(test_add_piece);
TEST(test_get_piece);
TEST(test_setup_chess_board);
TEST(test_remove_piece);
TEST(test_squares_share_file);
TEST(test_squares_share_rank);
TEST(test_squares_share_diagonal);
TEST(test_squares_share_knights_move);
TEST(test_squares_share_pawns_move);
TEST(test_squares_share_queens_move);
TEST(test_squares_share_kings_move);

#endif
