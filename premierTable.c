#include <stdio.h>
int main(){
    int i=0;
    int number[5];
    while (i<5){
        int x;
        printf("enter x=");
        scanf("%d",&x);
        number[i]=x;
        i++;
    };

    premierTable(number,i);
    return 0;

}

int premierTable(int arr[],int sizee){
   for(int i=0;i<sizee;i++){
    if(premierNumber(arr[i])){
        printf("ce nembre %d est un nombre premier \n",arr[i]);
    }else{
    printf("ce nembre %d n'est un nombre premier \n",arr[i]);
    }
   }

}
int premierNumber(int x){
    for(int i=2;i<x/2;i++){
    if(x%i ==0){
        return 0;
  };
};
return 1;
}
