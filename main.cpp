#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	srand(atoi(argv[2]));
	int n = atoi(argv[1]);
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for(int i=0; i<n; i++)
		square[i] = new char[n];
	for(int x=0; x<(n*n); x++)
		square[x%n][x/n] = ('a' + rand()%('z'-'a'));
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int x=0; x<(n*n); x++)
		printf("%c%c", square[x%n][x/n], ((x%n)==(n-1))?10:' ');
}
/*
uzupełnij niniejszy kod, w funkcji charSquare tworząc, a w funkcji drawCharSquare wyświetlając dwuwymiarową, dynamicznie alokowaną tablicę znaków,
wielkość kwadratu pobieraj z parametru wiersza poleceń,
znaki w tablicy mają być generowane losowo, przy użyciu funkcji rand(),
nie możesz modyfikować prototypów funkcji. */
/*
tak wypełnianie, jak wyświetlanie tablicy square zrealizuj przy użyciu pojedynczej
 pętli for, ograniczając jej ciało do jednej instrukcji.*/