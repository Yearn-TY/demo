#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	/*records if another games is to be played*/
	char another_game='Y';
	bool correct=true;
	int counter=0;
	int sequence_length=0;
	time_t seed=0;
	int number=0;
	time_t now=0;
	int time_taken=0;
	char a;
	
	/*Discribe how the game is played*/
	printf("\nTo play Simple Simon,");
	printf("watch the screen for a sequence of digits.");
	printf("\nWatch carefully,as the digits areonly displayed"
	"for a second!");
	printf("\nThe computer will remove them, and then prompt you ");
	printf("to enter the same sequence.\n");
	printf("\nWhen you do,you must put spaces between the digits.\n");
	printf("\nGood Luck!\nPress Enter to play\n");
	scanf("%c",&another_game);
	
	do{
		correct=true;
		counter=0;
		sequence_length=2;
		time_taken=clock();
//		printf("\n%d\n",time_taken);
		while(correct)
		{
			sequence_length+=counter++%3==0;
			
			seed=time(NULL);
			now=clock();
			srand((unsigned int)seed);
			int i=1;
			for(;i<=sequence_length;i++){
				printf("%d ",rand()%10);
			}
			for(;clock()-now<CLOCKS_PER_SEC;);
			printf("\r");
			for(i=1;i<=sequence_length*2;i++)
				printf(" ");
			if(counter==1)
				printf("\nNow you enter the sequence-don't forget the spaces\n");
			else printf("\r");
			
			srand((unsigned int)seed);
			for(i=1;i<=sequence_length;i++){
				scanf("%d",&number);
				if(number!=rand()%10){
					correct=false;
					break;
				}
			}
			printf("%s\n",correct?"Correct!":"Wrong!");
		}
		time_taken=(clock()-time_taken)/CLOCKS_PER_SEC;
		
		printf("\n\nYou sore is %d",--counter*100/time_taken);
		fflush(stdin);
		printf("\nDo you want to play again (Y/N)?");
//		scanf("%c",&a);
		scanf("%c",&another_game);
		
	}while(toupper(another_game)=='Y');
	
	return 0;
}
