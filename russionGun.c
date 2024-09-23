#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rounds;
    int table[6];
    rounds = saisir(rounds);
    remplirT(table, rounds);
    affichageT(table);
    printf("test\n");
    return 0;
}

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
    };
   for (int i = 0; i < 6; i++) {
        if(t[i]!=1){
            t[i]=0;
        }
    };


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
        printf("Element of the table %d: %d\n", i + 1, t[i]);
    }

    return 0;
}

int play (int t[6],int rounds){
int i=0;
while(i<6){

}

}
