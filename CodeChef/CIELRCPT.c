#include<stdio.h>
#include<math.h>

int main(void){

    short int t, i, min_items;
    long price;

    scanf("%d", &t);

    while(t--){

        scanf("%ld", &price);
        min_items=0;

        while(price!=0){

            i=0;

            while(price>=pow(2,i)&&i<12){

                i++;
            }
            i-=1;

            price-=pow(2,i);
            min_items++;
        }

        printf("%d\n", min_items);

    }
}
