int player_one()
	{
		do
		{
	   
			int l,c;
			char player1='o';
			printf("%s INSERTS 'O'\n",name1);
			printf("LINE:");
			scanf("%d",&l);
			printf("COLUMN:");
			scanf("%d",&c);
			if(l>=0 && l<3 && c>=0 && c<3 && game[l][c]==' ')
			{
			  game[l][c]=player1;
			  count--;
			}
			else 
			{
				puts("\a");
				printf("\t\t\x3 \x4 TRY AGAIN \x5 \x6\n\n");
	      player_one();
			}
			if(count==0)
			 {
		 	    tied++;
	 	    	system("cls");
				 	draw_game(game);
					printf("\a\t\tTIED GAME\n\n");  	  
		  		menu();
			 }
			 
	    if( game[0][0]==player1 && game[0][1]==player1 && game[0][2]==player1 ||
			    game[0][0]==player1 && game[1][0]==player1 && game[2][0]==player1 ||
				  game[0][1]==player1 && game[1][1]==player1 && game[2][1]==player1 ||
				  game[0][2]==player1 && game[1][2]==player1 && game[2][2]==player1 ||
		      game[1][0]==player1 && game[1][1]==player1 && game[1][2]==player1 ||
				  game[2][0]==player1 && game[2][1]==player1 && game[2][2]==player1 ||		
				  game[0][0]==player1 && game[1][1]==player1 && game[2][2]==player1 ||
				  game[0][2]==player1 && game[1][1]==player1 && game[2][0]==player1   )    
		  {
		  	winner1++;
	  		system("cls");
		  	draw_game(game);
		  	printf("\t %s WINN!!\n\n",name1);
		  	menu();
			 
			}		 
			 
	system("cls"); 
	}while(count==0);
		  
	}
