#include <stdio.h>
#include <string.h>

int calculate (int a,int b,char sumb){

if(sumb=='+'){
    return a+b;
}
else if(sumb=='*'){
    return a*b;
}
else if(sumb=="-"){
    return a-b;
}
else {
    if( b==0){
        printf("%d it must be defference from 0",b);
        return 0;
    }
    else {
        return a/b;
    }
}
return 0;
}
int main(){
    int a,b;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    char sumb;
    printf("enter a semble ('+,-,*,/') : ");
    scanf(" %c",&sumb);
    int result=calculate(a,b,sumb);
    printf("%d %c %d = %d\n",a,sumb,b,result);
    return 0;
}


