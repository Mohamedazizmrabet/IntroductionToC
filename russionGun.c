#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int saisir() {
    int x;

    do {
        printf("Saisir rounds (1-6): ");
        scanf("%d", &x);
    } while (x < 1 || x > 6);

    return x;
}

int remplirT(int t[6], int rounds) {
    int filledSlots = 0;

    srand(time(0));

    while (filledSlots < rounds) {
        int x = rand() % 6;

        if (t[x] == 0) {
            t[x] = 1;
            filledSlots++;
        }
    }

    return 0;
}

int verif(int t[6], int rounds) {
    int filledSlots = 0;

    for (int i = 0; i < 6; i++) {
        if (t[i] == 1) {
            filledSlots++;
        }
    }

    return filledSlots == rounds;
}

int affichageT(int t[6]) {
    for (int i = 0; i < 6; i++) {
        printf("Element of the table %d: %d\n", i , t[i]);
    }

    return 0;
}

char *play(int t[], int rounds,int i) {


    while (i < rounds) {

        char x[5];
        printf("Type 'shoot' to see if live or DIE!!!!: ");
        scanf("%s", x);  // Correct input scanning

        if (strcmp(x, "shoot") == 0) {


            // This should pass the current value of `i` to `didUdie`
            if (didUdie(t, i) == 0) {
                return "You're dead :) let's play again";
            } else {
                i = i + 1;
                printf("You survived this one! it only makes the game for fun :) Moving to the next round.\n");
            }
        } else {
            printf("Invalid input. Please type 'shoot'.\n");
        }

    }
    return "You survived all rounds!";
}

int didUdie(int t[], int i) {
    if (t[i] == 1) {
        return 0;  // You die
    } else {
        return 1;  // You survive
    }
}

int main() {
    char playAgain='y';
    while(playAgain=='y'|| playAgain=='Y'){
    int countForPlay=0;
    int rounds;
    int table[6]={0,0,0,0,0,0};
    rounds = saisir();
    remplirT(table, rounds);
    char *result = play(table, rounds,countForPlay);
    printf("%s\n", result);
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &playAgain);
    };
    printf("i hope u liked this simple game");
    return 0;
}
