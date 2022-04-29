#include <stdio.h>
#include <stdlib.h>
#include "desenho.h"
#include "jogadores.h"
#include "matris.h"
#include "jogador1.h"
#include "jogador2.h"
#include "menu.h"
int main(int argc, char *argv[]) {
	printf("Enter your name to play:");
	gets(name1);
    printf("Enter your name to play:");
	gets(name2);
	matrix();
	do{
		draw_game(game);
		player_one();
		draw_game(game);
		player_two();
	}while(1);
	return 0;
}
