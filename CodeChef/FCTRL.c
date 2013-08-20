#include<stdio.h>
#include<math.h>

int main(void){

    long t, n;
    int i, no_zeros=0;

    scanf("%ld",&t);

    while(t--){

        scanf("%ld", &n);

        for(i=1;n>=pow(5,i);i++){

            no_zeros+=floor(n/pow(5,i));
        }

        printf("%d\n",no_zeros);

        no_zeros=0;
    }

    return 0;
}
