#include<stdio.h>

int main(void){

    long n, k, t, count=0;

    scanf("%ld%ld",&n, &k);

    for(;n>0&&scanf("%ld",&t);n--){

        if(t%k==0){

            count++;
        }
    }

    printf("%ld",count);

    return 0;
}
