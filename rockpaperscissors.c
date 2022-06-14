#include <cs50.h>
#include <stdio.h>

int main(void) {

    // get user input from PLAYER 1 and 2

    int rock = 1;
    int paper = 2;
    int scissors = 3;

    int playerOneInput = get_int("1 for rock, 2 for paper, 3 for scissors: ");

    if (playerOneInput == 1)
    {
        printf("Player 1 chooses ROCK\n");
    }
    else if (playerOneInput == 2)
    {
        printf("Player 1 chooses PAPER\n");
    }
    else if (playerOneInput == 3)
    {
        printf("Player 1 chooses SCISSORS\n");
    }

    int playerTwoInput = get_int("1 for rock, 2 for paper, 3 for scissors: ");
    if (playerTwoInput == 1)
    {
        printf("Player 2 chooses ROCK.\n");
    }
    else if (playerTwoInput == 2)
    {
        printf("Player 2 chooses PAPER\n");
    }
    else if (playerTwoInput == 3)
    {
        printf("Player 2 chooses SCISSORS\n");
    }


    if (playerOneInput == 2 && playerTwoInput == 1)         // P1 WIN PAPER > ROCK
    {
        printf("PLAYER 1 WINS. PAPER COVERS ROCK.\n");
    }
     else if (playerOneInput == 1 && playerTwoInput == 3)   // P1 WIN ROCK > SCISSORS
    {
        printf("PLAYER 1 WINS. ROCK SMASHES SCISSORS.\n");
    }
     else if (playerOneInput == 3 && playerTwoInput == 2)   // P1 WIN SCISSORS > PAPER
    {
        printf("PLAYER 1 WINS. SCISSORS CUTS PAPER.\n");
    }
     else if (playerTwoInput == 2 && playerOneInput == 1)   // P2 WIN PAPER > ROCK
    {
        printf("PLAYER 2 WINS. PAPER COVERS ROCK.\n");
    }
     else if (playerTwoInput == 1 && playerOneInput == 2)   // P2 WIN ROCK > SCISSORS
    {
        printf("PLAYER 2 WINS. ROCK SMASHES SCISSORS.\n");
    }
    else if (playerTwoInput == 3 && playerOneInput == 2)    // P2 WIN SCISSORS > PAPER
    {
        printf("PLAYER 2 WINS. SCISSORS CUTS PAPER.\n");
    }
     else
     {
        printf("TIE GAME!.");
     }

}

     // ask to play again
    /*
     int playAgain = get_int("Do you want to play again? Press 1 for YES, 2 for NO. \n");

     if (playAgain == 1)
     {
        int playerOneInput = get_int("1 for rock, 2 for paper, 3 for scissors: \n");
     }
     else
     {
        printf("GOODBYE\n");
     }
}
*/
