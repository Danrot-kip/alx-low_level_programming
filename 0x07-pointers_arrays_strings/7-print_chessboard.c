#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: matrix 8*8
 * Description:  function that prints the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int file, columns;
for (file = 0 ; file < 8 ; file++)
{
for (columns = 0 ; columns < 8; columns++)
{
_putchar(a[file][columns]);
}
_putchar('\n');
}
}
