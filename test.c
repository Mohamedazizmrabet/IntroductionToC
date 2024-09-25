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
        printf("Element of the table %d: %d\n", i, t[i]);
    }

    return 0;
}

char *play(int t[], int rounds) {
    int i = 0;
    printf("\nBefore starting the loop, i: %d\n", i);

    while (i < 6) {
        printf("\nFirst line in loop, i: %d\n", i);

        char x[5];
        printf("Type 'shoot' to see if live or DIE!!!!: ");
        scanf("%s", x);  // Correct input scanning
        printf("You typed: %s\n", x);

        if (strcmp(x, "shoot") == 0) {
            printf("Input is 'shoot'\n");

            // Printing the value of `i` before calling `didUdie`
            printf("Checking didUdie(t, %d): t[%d] = %d\n", i, i, t[i]);

            // This should pass the current value of `i` to `didUdie`
            if (didUdie(t, i) == 0) {
                printf("Game Over! You died at round %d\n", i);
                return "gameOver";
            } else {
                printf("You survived this one! Moving to the next round.\n");
                i = i + 1;  // Increment `i`
                printf("After surviving, i is now: %d\n", i);
            }
        } else {
            printf("Invalid input. Please type 'shoot'.\n");
        }
    }
    return "You survived all rounds!";
}

int didUdie(int t[], int i) {
    // Print value of `i` to verify it's being passed correctly
    printf("\nInside didUdie: checking t[%d]: %d\n", i, t[i]);

    if (t[i] == 1) {
        printf("Result: You died (t[%d] == 1)\n", i);  // If you die
        return 0;  // You die
    } else {
        printf("Result: You survived (t[%d] == 0)\n", i);  // If you survive
        return 1;  // You survive
    }
}

int main() {
    int rounds;
    int table[6] = {0, 0, 0, 0, 0, 0};
    rounds = saisir();
    remplirT(table, rounds);
    affichageT(table);
    char *result = play(table, rounds);
    printf("%s\n", result);
    return 0;
}
