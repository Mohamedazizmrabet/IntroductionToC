#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int rounds;
    int table[6];
   rounds= saisir(rounds);
   remplirT();
    printf("test");
    return 0;
}
int saisir(){
    int x;
    printf("saisir rounds : ");
    scanf("%d",&x);
    while(x>6 || x<1){
       printf("saisir rounds : ");
      scanf("%d",&x);
    };
return x;
}

int remplirT(){
    srand(time(0));
    int x=(rand()% 6);
    printf("randommmmmmmmm %d",x);
    return 0;
}

