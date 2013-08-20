#include<stdio.h>
#include<math.h>

int count_digits(int);
int reverse(int, int);

int main(void){

    int t, n1, n2, dn1, dn2, sum=0, dsum;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&n1, &n2);

        dn1=count_digits(n1);
        dn2=count_digits(n2);

        n1=reverse(n1,dn1);
        n2=reverse(n2, dn2);

        sum=n1+n2;
        dsum=count_digits(sum);
        sum=reverse(sum, dsum);

        printf("%d\n", sum);
    }

    return 0;
}

int count_digits(int n){

    int count=1;

    while(n/=10){

        count++;
    }

    return count;
}

int reverse(int n,int d){

    int rev_n=0;

    while(d>0){

        rev_n+=(n%10)*pow(10,d-1);
        n/=10;
        --d;
    }

    return rev_n;
}
