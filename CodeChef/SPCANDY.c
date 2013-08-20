#include<stdio.h>

int main(){
    int t;    // for test-case
    long long n, k;  // number of candies and students respectively
    register long long each_child, teacher;    // candies with each student and teacher respectively

    scanf("%d", &t);

    // for each test-case
    while(t--){
        scanf("%lld %lld", &n, &k);

        // special case - 1: n=0 i.e., zero candies
        if(n==0){
            each_child = teacher = 0;
        } else if(k==0){    // special case - 2: k=0 i.e., zero children
            each_child = 0;
            teacher = n;
        } else{
            each_child = n/k;
            teacher = n%k;
        }

        printf("%lld %lld\n", each_child, teacher);
    }

    return 0;
}
