#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guessed,guessing,attempt=0;
    char choice;
    srand(time(NULL));
    guessed=rand() % 100 + 1;
    printf("Welcome to number guessing game.\n");
    printf("Guess the number between 0-100.\n");
    do
    {   
        printf("Enter a number:\n");
        scanf("%d",&guessing);
        attempt++;
        if(guessed<guessing)
        {
            printf("Too high! Please enter low number.\n");
        }
        else if(guessed>guessing)
        {
            printf("Too low! Please enter higher number.\n");
        }
        else{
            printf("Congratulation!!\n");
            printf("You have guess the number %d in %d attempt.",guessing,attempt);
        }
    }while (guessing!=guessed);
    return 0;
}