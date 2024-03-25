void game2(){
    system("clear");
    int player;
    int computer;
    int player_win_count = 0;
    int computer_win_count = 0;
    for (int round = 1; round <= 3; round++){
      printf(" \n");
      printf("Round %d\n", round);


      printf(" \n");
      printf("Please Select Your move\n");
      printf("Water(0), Air(1), Paper(2), Sponge(3), Scissors(4), Fire(5), Rock(6)\n");
      printf("Choice: ");
      while(scanf("%d", &player) != 1 || player < 0 || player > 6) {
        printf("Invalid input. Please enter a number between 0 and 6.\n");
        while(getchar() != '\n'); 
        printf("Choice: ");
      }

      computer = rand() % 6;

      printf("Computer chose: ");
      switch (computer) {
      case 0:
        printf("Water\n");
        break;
      case 1:
        printf("Air\n");
        break;
      case 2:
        printf("Paper\n");
        break;
      case 3:
        printf("Sponge\n");
        break;
      case 4:
        printf("Scissors\n");
        break;
      case 5:
        printf("Fire\n");
        break;
      case 6:
        printf("Rock\n");
        break;
      default:
        printf("Unknown\n");
      }
      //Conditional (ternary) operator
      int winner = (player == computer)                 ? 0
                   : ((player - computer + 6) % 6 <= 3) ? 1
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



  
