char game[][3]= {{' ',' ',' '},
	             {' ',' ',' '},
	             {' ',' ',' '}};
int count=9;
int winner1=0;
int winner2=0;
int tied =0;
char name1[100],
     name2[100];	
void draw_game(char g[3][3])
	{
	
	  printf("\n       JOGO DA VELHA\n\n\n");
	  printf("\t  \x3  0    1    2 \n");
	  printf("\t0     %c | %c | %c  \n", g[0][0], g[0][1], g[0][2]);
	  printf("\t    -------------\n");
	  printf("\t1     %c | %c | %c  \n", g[1][0], g[1][1], g[1][2]);
	  printf("\t    -------------\n");
	  printf("\t2     %c | %c | %c  \n", g[2][0], g[2][1], g[2][2]);
	  printf("\n\n\t\tMove left=%d",count);
	  printf("\n\n\t\t SCORE \n \n");
	  printf("\t  %s = %d X %d = %s   <> TIED = %d",name1,winner1,winner2,name2,tied);
	  puts("\n"); 
	}
