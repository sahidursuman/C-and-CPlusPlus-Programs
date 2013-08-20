#include<stdio.h>
#include<iostream>
#include<set>

using namespace std;

int sum_of_digits(int n);

int main(){
    int t;

    set<int> primes;
    primes.insert(2);primes.insert(3);
    primes.insert(5);primes.insert(7);
    primes.insert(11);primes.insert(13);
    primes.insert(17);primes.insert(19);
    primes.insert(23);primes.insert(29);
    primes.insert(31);primes.insert(37);
    primes.insert(41);primes.insert(43);
    primes.insert(47);primes.insert(53);
    primes.insert(59);primes.insert(61);
    primes.insert(67);primes.insert(71);
    primes.insert(73);primes.insert(79);
    primes.insert(83);primes.insert(89);primes.insert(97);

    int l, h;
    int count;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &l);
        scanf("%d", &h);

        count=0;

        for(int i=l;i<h+1;i++){
            if((primes.find(sum_of_digits(i)))!=primes.end()){
                count++;
            }
        }

        printf("%d\n", count);
    }
}

int sum_of_digits(int n){
    int sum=0;

    while(n){
        sum+=n%10;
        n/=10;
    }

    return sum;
}
