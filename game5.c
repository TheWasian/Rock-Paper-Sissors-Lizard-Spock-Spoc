void game5(){
  system("clear");
  int player;
  int computer;
  int gesture = 0;
  int player_win_count = 0;
  int computer_win_count = 0;

  printf("What number of gestures do you want to play? \n");
  printf("Choice:");
  scanf("%d", &gesture);


  for (int round = 1; round <= 3; round++) {
    printf(" \n");
    printf("Round %d\n", round);

    printf(" \n");
    printf("Please Select Your move\n");
    printf("INFINATE CHOICES!!!!\n");
    printf("Choice: ");

    while(scanf("%d", &player) != 1 || player < 0 || player > gesture) {
      printf("Invalid input. Please enter a number between 0 and %d\n", gesture);
      while(getchar() != '\n'); // Clear input buffer
      printf("Choice: ");
    }

    computer = rand() % gesture;

    printf("Computer chose: %d\n", computer);

    //Conditional (ternary) operator
    int winner = (player == computer)                 ? 0
                 : ((player - computer + gesture) % gesture <= (gesture-1/2)) ? 1
                                                      : 2;
    // 0 = Tie, 1 = Player wins, 2 = Computer wins
    if (winner == 0) {
      printf("It's a tie!\n");
    } else if (winner == 1) {
      printf("You win!\n");
      player_win_count++;
    } else {
      printf("Computer wins!\n");
      computer_win_count++;
    }
  }

  if (player_win_count > computer_win_count) {
    printf("Congratulations, you won the Best of 3!\n");
  } else if (player_win_count < computer_win_count) {
    printf("Unlucky, the computer won the Best of 3!\n");
  } else {
    printf("It's a tie, you and the computer are both Winners!\n");
  }


}