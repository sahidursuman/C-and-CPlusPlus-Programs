#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

#define MOD 1000000007

int main(){
    int t, num_a[100], index_a=0, i;
    unsigned long long numbers[3], a, b, c, temp, x, result=0;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld%lld", &numbers[0], &numbers[1], &numbers[2]);
        sort(numbers, numbers+3);

        a=numbers[0];
        b=numbers[1];b-=1;
        c=numbers[2];c-=2;

        while(a!=0){
            num_a[index_a++]=a%10;
            a/=10;
        }

        /* multiply a with b */
        temp=0;

        for(i=0;i<index_a;i++){
            x=num_a[i]*b+temp;
            num_a[i]=x%10;
            temp=x/10;
        }

        while(temp!=0){
            num_a[i]=temp%10;
            temp/=10;
            i++;
            index_a++;
        }
        /* a*b done */

        /* multiply a with c */
        temp=0;

        for(i=0;i<index_a;i++){
            x=num_a[i]*c+temp;
            num_a[i]=x%10;
            temp=x/10;
        }

        while(temp!=0){
            num_a[i]=temp%10;
            temp/=10;
            i++;
            index_a++;
        }
        /* a*c done */

        for(i=index_a-1;i>=0;i--){
            result=result*10+num_a[i];
            result=result%MOD;
        }

        printf("%lld\n", result);
        temp=x=index_a=result=0;
    }

    return 0;
}
