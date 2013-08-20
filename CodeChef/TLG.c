#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, p1_score, p2_score, p1_total=0, p2_total=0, lead, winner, max_lead=0;

    scanf("%d", &n);

    while(n--){

        scanf("%d%d", &p1_score, &p2_score);

        p1_total+=p1_score;
        p2_total+=p2_score;

        lead=abs(p1_total-p2_total);

        if(max_lead<lead){

            max_lead=lead;

            if(p1_total>p2_total){

                winner=1;
            }
            else{

                winner=2;
            }
        }
    }

    printf("%d %d\n", winner, max_lead);

    return 0;
}
