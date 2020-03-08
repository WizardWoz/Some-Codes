#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void){
	int dice,roll,sets,sides,status;
	
	srand((unsigned int)time(NULL));
	printf("Enter the number of sets;enter q to quit:");
	while(scanf("%d",&sets)==1&&sets>0){
		int i;
		printf("How many sides and how many dice?");
		scanf("%d %d",&sides,&dice);
		printf("Here are 18 sets of %d %d-sided throws.\n",dice,sides);
		for(i=1;i<=sets;i++){
			printf("%d ",roll_n_dice(dice,sides));
			if(i%15==0)
				putchar('\n');
		}
		printf("\nHow many sets?Enter q to stop:");
	}
}
