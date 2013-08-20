#include<stdio.h>

int array[42];

int main(void){

    int t=10, i, num, count;

    while(t--){

        count=0;

        for(i=0;i<42;i++){

            array[i]=0;
        }

        for(i=0;i<10;i++){

            scanf("%d", &num);
            array[num%42]=1;
        }

        for(i=0;i<42;i++){

            count+=array[i];
        }

        printf("%d\n",count);
    }

    return 0;
}
