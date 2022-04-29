int player_two()
	{
	do
	{
		
			int l,c;
		  char player2='x';
			printf("%s  INSERTS 'X'\n",name2);
			printf("LINE:");
			scanf("%d",&l);
			printf("COLUMN:");
			scanf("%d",&c);
				if(l>=0 && l<3 && c>=0 && c<3 && game[l][c]==' ')
			{
			  game[l][c]=player2;
			  count--;
			}
			else 
			{
				puts("\a");
				printf("\t\t\x3 \x4 TRY AGAIN \x5 \x6\n\n");
			  player_two();
			}
			if(count==0)
			 {  
          tied++;
         	system("cls");
			    draw_game(game);
			    printf("\a\t\tTIED GAME\n\n");			    
				  menu();
		  
				}
		  if( game[0][0]==player2 && game[0][1]==player2 && game[0][2]==player2 ||
			    game[0][0]==player2 && game[1][0]==player2 && game[2][0]==player2 ||
				  game[0][1]==player2 && game[1][1]==player2 && game[2][1]==player2 ||
				  game[0][2]==player2 && game[1][2]==player2 && game[2][2]==player2 ||
		      game[1][0]==player2 && game[1][1]==player2 && game[1][2]==player2 ||
			    game[2][0]==player2 && game[2][1]==player2 && game[2][2]==player2 ||
				  game[0][0]==player2 && game[1][1]==player2 && game[2][2]==player2 ||
				  game[0][2]==player2 && game[1][1]==player2 && game[2][0]==player2   )    
		  {
		  	winner2++;
	  		system("cls");
        draw_game(game);
		  	printf("\t %s WINN!!\n\n",name2);
		  	menu();
			 
			}		  
			
				
	system("cls");
	}while(count==0);
	
	
		  
	}
	
