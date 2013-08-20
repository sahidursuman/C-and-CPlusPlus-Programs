#include<stdio.h>

int main(void){

    int withdrawAmt;
    float initialBalance;

    scanf("%d%f",&withdrawAmt,&initialBalance);

    if(withdrawAmt%5!=0){

        printf("%0.2f",initialBalance);
    }
    else{

        if(initialBalance<withdrawAmt+0.50){

            printf("%0.2f",initialBalance);
        }
        else{

            printf("%0.2f",initialBalance-withdrawAmt-0.50);
        }
    }

    return 0;
}
