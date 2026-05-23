#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {


    char symbols[] = {'!', '@', '#', '$', '%', '^', '&', '*'};
    int num_symbols = 8;

    int tux_balance = 100;
    int bet;
    srand(time(NULL));
    printf("Welcome to the zambling!\n");
    printf("Your current balance: %d Tux\n\n", tux_balance);

    while (tux_balance > 0) {
        printf("current balance: %d Tux\n", tux_balance);
        printf("Enter your bet (or 0 to quit): ");
        if (scanf("%d", &bet) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (bet == 0) {
            printf("sadly you walked away with %d Tux. Leave me a bed at homeless shelter too :( \n", tux_balance);
            break;
        }

        if (bet > tux_balance || bet < 0) {
            printf("You cannot bet more than your current balance. Try again.\n");
            continue;
        }

        tux_balance -= bet;

        char result[3];
        for (int i = 0; i < 3; i++) {
            result[i] = symbols[rand() % num_symbols];
            printf(" %c ", result[i]);
            fflush(stdout);
            usleep(500000);
        }

        printf("\n\n-------------------------\n");

        if (result[0] == result[1] && result[1] == result[2]) {
            char winning_symbol = result[0];
            int winnings = 0;

            if (winning_symbol == '!') {
                winnings = bet * 10;
            } else if (winning_symbol == '@') {
                winnings = bet * 20;
            } else if (winning_symbol == '#') {
                winnings = bet * 30;
            } else if (winning_symbol == '$') {
                winnings = bet * 40;
            } else if (winning_symbol == '%') {
                winnings = bet * 50;
            } else if (winning_symbol == '^') {
                winnings = bet * 60;
            } else if (winning_symbol == '&') {
                winnings = bet * 70;
            } else if (winning_symbol == '*') {
                winnings = bet * 80;
            }

            tux_balance += winnings;
            printf("Congratulations! You won %d Tux! You will not be homeless today! :D \n\n", winnings);
        } else if (result[0] == result[1] || result[0] == result[2] || result[1] == result[2]) {
            char winning_symbol;
            if (result[0] == result[1] || result[0] == result[2]) {
                winning_symbol = result[0];
            } else {
                winning_symbol = result[1];
            }

            int full_winnings = 0;
            if (winning_symbol == '!') {
                full_winnings = bet * 10;
            } else if (winning_symbol == '@') {
                full_winnings = bet * 20;
            } else if (winning_symbol == '#') {
                full_winnings = bet * 30;
            } else if (winning_symbol == '$') {
                full_winnings = bet * 40;
            } else if (winning_symbol == '%') {
                full_winnings = bet * 50;
            } else if (winning_symbol == '^') {
                full_winnings = bet * 60;
            } else if (winning_symbol == '&') {
                full_winnings = bet * 70;
            } else if (winning_symbol == '*') {
                full_winnings = bet * 80;
            }

            int winnings = full_winnings / 2;
            tux_balance += winnings;
            printf("Nice! Two %c symbols matched. You won %d Tux (half the 3-symbol payout).\n\n", winning_symbol, winnings);
        } else {
            printf(" No match. Better luck next time!\n\n");
        }
    }

    if (tux_balance <= 0) {
        printf("You ran out of Tux! Game Over.\n");
    }

    return 0;
}       




