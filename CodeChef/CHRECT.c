#include<stdio.h>

int main(){
    int t, n, m, k, max_stones;
    scanf("%d", &t);

    while(t--){
        max_stones=0;
        scanf("%d%d%d", &n, &m, &k);

        if((n==1&&m==1)||(n==2&&m==1)||(n==1&&m==2)){
            max_stones = 0;
        }
        else if(n==1||m==1){
            max_stones=k;
        }
        else{
            max_stones+= k/2 + k%2;
        }

        printf("%d\n", max_stones);
    }

    return 0;
}
