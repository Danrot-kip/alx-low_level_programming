#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: matrix 8*8
 * Description:  function that prints the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int file, column;
for (file = 0 ; file < 8 ; fila++)
{
for (column = 0 ; column < 8; column++)
{
_putchar(a[file][column]);
}
_putchar('\n');
}
}
