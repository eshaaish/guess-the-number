#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int number, guess, nguesses=1;
	srand(time(0));
	number = rand()%100+1;//generate random number betweeen 1 and 100
	//printf("the number is %d",number);
	//keep running the loop until the number is guessed
	do{
		printf("guess the no. between 1 and 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("lower number please\n");}
		else if(guess<number){
			printf("higher number please\n");
		
		}
		else {
			printf("you guessed it in %d attempts\n", nguesses);
		}
		nguesses++;
	}while(guess!=number);
}

