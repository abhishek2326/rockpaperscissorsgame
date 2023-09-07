#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerScore = 0, computerScore = 0;
    int numGames = 3;

    printf("Enter your name: ");
    char playerName[50];
    scanf("%s", playerName);

    printf("\nWelcome, %s! Let's play Rock, Paper, Scissors.\n", playerName);

    for (int i = 0; i < numGames; i++) {
        printf("\nRound %d\n", i + 1);

        // Get player's choice
        printf("Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors): ");
        int playerChoice;
        scanf("%d", &playerChoice);

        if (playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            i--;  // Repeat this round
            continue;
        }

        // Convert player's choice to Rock, Paper, or Scissors
        char *choices[] = {"Rock", "Paper", "Scissors"};
        printf("%s chose: %s\n", playerName, choices[playerChoice - 1]);

        // Generate computer's choice
        srand(time(NULL));  // Seed the random number generator
        int computerChoice = rand() % 3;  // Generates 0, 1, or 2

        printf("Computer chose: %s\n", choices[computerChoice]);

        // Determine the winner of this round
        if ((playerChoice == 1 && computerChoice == 2) ||
            (playerChoice == 2 && computerChoice == 0) ||
            (playerChoice == 3 && computerChoice == 1)) {
            printf("%s wins this round!\n", playerName);
            playerScore++;
        } else if ((computerChoice == 1 && playerChoice == 2) ||
                   (computerChoice == 2 && playerChoice == 0) ||
                   (computerChoice == 3 && playerChoice == 1)) {
            printf("Computer wins this round!\n");
            computerScore++;
        } else {
            printf("It's a draw this round!\n");
        }
    }

    // Display final scores and winner
    printf("\nFinal Scores:\n");
    printf("%s: %d\n", playerName, playerScore);
    printf("Computer: %d\n", computerScore);

    if (playerScore > computerScore) {
        printf("\n%s wins the game!\n", playerName);
    } else if (computerScore > playerScore) {
        printf("\nComputer wins the game!\n");
    } else {
        printf("\nIt's a draw!\n");
    }

    return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     // srand(time(NULL));
//     // printf("The random number between 0 to 888 is %d",rand()%888);

//     char *ptr[] = {"Rock", "Paper", "scissor"};
//     srand(time(NULL));

//     int playerChoice = rand() %3;
//     int computerChoice = rand() %3;

//    for (int i = 0; i < 3; i++)
//    {
    
   
   
//      printf("Enter your choice (1 - Rock, 2 - Paper, 3 - Scissor) : ");
//     scanf("%s",&playerChoice);

//     printf("Player 1 Chose: ");
//     if (1)
//     {
//        printf("Rock\n");
//     }
//    else if (2)
//    {
//        printf("Paper\n");
//    }
   
//     else if (3)
//    {
//        printf("Scissor\n");
//    }
//    else
//    {
// printf("You enter invalid no!\n");
//    }
   

//     printf("Computer Chose: %s\n", ptr[computerChoice]);

// }
// if (
//     (playerChoice == 1 && computerChoice == 3) ||
//     (playerChoice == 2 && computerChoice == 1) ||
//     (playerChoice == 3 && computerChoice == 2))
// {
//     printf("Player wins this game!");
// }
// else if (
//      (computerChoice == 1 && playerChoice == 3) ||
//     (computerChoice == 2 && playerChoice == 1) ||
//     (computerChoice == 3 && playerChoice == 2))
// {
//      printf("Computer wins this game!");
// }
// else
// {
//     printf("It's draw this game!");
// }

//     return 0;
// }
