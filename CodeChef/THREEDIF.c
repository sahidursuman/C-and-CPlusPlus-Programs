#include<stdio.h>

#define MOD 1000000007

int main(){

    int t;
    long long int n1, n2, n3, i, j, k, count=0;

    scanf("%d", &t);

    while(t--){

        scanf("%lld%lld%lld", &n1, &n2, &n3);

        for(i=1;i<=n1;i++){

            for(j=1;j<=n2;j++){

                if(j==i){

                     continue;
                }

                for(k=1;k<=n3;k++){

                    if(k==j||k==i){

                        continue;
                    }

                    count++;
                }
            }
        }

        printf("%lld\n", count%MOD);
        count=0;
    }
}
