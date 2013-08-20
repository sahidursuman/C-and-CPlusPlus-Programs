#include<stdio.h>
#include<math.h>

int count_digits(long);
long reverse(long, int);
void palindrome(long, long);

int main(void){

    int t;
    long n,rev_n;

    scanf("%d",&t);

    while(t--){

        scanf("%ld", &n);
        rev_n=reverse(n,count_digits(n));

        palindrome(n, rev_n);
    }

    return 0;
}

int count_digits(long n){

    int count=1;

    while(n/=10){

        count++;
    }

    return count;
}

long reverse(long n, int d){

    long reverse_n=0;

    while(d>0){

        reverse_n+=(n%10)*pow(10,d-1);

        n/=10;
        d--;
    }

    return reverse_n;
}

void palindrome(long n, long rev_n){

    static int no_iterations=0;

    if(n!=rev_n){

        n+=rev_n;
        rev_n=reverse(n, count_digits(n));
        no_iterations++;

        palindrome(n,rev_n);
    }
    else{
        printf("%d %ld\n", no_iterations, n);
    }
    no_iterations=0;
}
