#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
