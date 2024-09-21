#include <stdio.h>

int main(){
    int x;
    printf("enter x=");
    scanf("%d",&x);
    int y;
    printf("enter y=");
    scanf("%d",&y);
    int som=somme(y,x);
    printf("int %d",som);
    return 0;
};
int somme(int a , int b){
    return a+b;
}
