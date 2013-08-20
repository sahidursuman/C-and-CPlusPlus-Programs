#include<stdio.h>

int main(void){

    int t, n, fact[201], x, temp, m=0, i, j=0, temp_n=0, index=0;

    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        if(n==0||n==1){

            printf("%d\n",1);
        }
        else{

            temp_n=n;

            while(temp_n!=0){

                    fact[index]=temp_n%10;
                    temp_n/=10;
                    index++;
                    m++;
            }

            index=0;
            n-=1;

            while(n!=0){

                temp=0;

                for(j=0;j<m;j++){

                    x=fact[j]*n+temp;
                    fact[j]=x%10;
                    temp=x/10;
                }

                while(temp!=0){

                    fact[j]=temp%10;
                    temp/=10;
                    j++;
                    m++;
                }

                n-=1;
            }

            for(i=m-1;i>=0;i--){

                printf("%d",fact[i]);
            }

            m=0;i=0;j=0;x=0;temp=0;
            printf("\n");
        }
    }

    return 0;
}
