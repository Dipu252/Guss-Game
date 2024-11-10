#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int num,guess,i=0;
    srand(time(0));
    num=rand()%100 +1;
    printf("please enter the guess number between 1 to 100 \n");
    do{
        scanf("%d", &guess);
        i++;
    if(guess>num){
        printf("please enter the lower number \n");
    }
    else if(guess<num){
        printf("please enter the greater number \n");
    }
    else{
        printf("your attempts number of guess=%d\n", i);
    }
    } while (num!=guess);
    return 0;
}