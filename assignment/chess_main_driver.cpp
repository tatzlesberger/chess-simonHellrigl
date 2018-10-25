/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			Chess
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Some basic movements in chess.
 * ----------------------------------------------------------
 */
#include <stdio.h> 
#include <string.h>

#include "chess.h"
#include "chess_printer.h"

#include "test_chess.h"

/** ui_branch handles the user interface mode of Chess.
*** @see main, test_branch.
*/
void ui_branch();

/** Main function evaluates the number of command line arguments.
*** If the user passed one main switches into test mode, i.e., that
*** the function test_branch() is called and the command line argument
*** is handed over to this function. If no command line argument is given
*** main switches into user interface mode and delegates the handling
*** of this to the function ui_branch().
*** @see test_branch, ui_branch.
*/
int main(int argc, char *argv[])
{
	ui_branch();
	return 0;
}

void ui_branch()
{
	ChessBoard chess_board;
	setup_chess_board(chess_board);

	print_chess_board(chess_board);
}
