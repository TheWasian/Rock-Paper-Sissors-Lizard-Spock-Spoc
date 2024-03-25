#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int selection = 0;
  printf("Welcome to Rock Paper Scissors Infinite\n");
  printf("Rock, Paper, Scissors, Lizard, Spock (1)\n");
  printf("Rock, Paper, Scissors, +4 (2)\n");
  printf("Rock, Paper, Scissors, +6 (3)\n");
  printf("Rock, Paper, Scissors, +8 (4)\n");
  printf("Rock Paper Scissors Infinite (5)\n");
  printf("Selection: ");
  scanf("%d", &selection);
  if (selection == 1) {
    game1();
  } 
  else if (selection == 2){
    game2();
  }
  else if(selection == 3){
    game3();
  }
  else if(selection == 4){
    game4();
  }
  else if(selection == 5){
    game5();
  }
  else {
    system("clear");
    printf("Invalid Selection");
  }
}
