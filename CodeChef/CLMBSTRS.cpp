#include<stdio.h>
#include<iostream>
#include<vector>
#include<bitset>
#include<string>
using namespace std;

#define MOD 1000000007
#define LOOP(i) for(int i=0;i<2;i++)

typedef vector<vector<long  long> > v2d;

v2d multiply(v2d a, v2d b){
    v2d c(2, vector<long long>(2));
    LOOP(i) LOOP(j) LOOP(k)
        c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;

    return c;
}

v2d pow(v2d a, long p){
    if(p==1){
        return a;
    }
    else if(p%2==1){
        return multiply(a, pow(a, p-1));
    }
    else{
        v2d temp= pow(a, p/2);
        return multiply(temp, temp);
    }
}

void fib(long n, int g){
    vector<long long> f1(2);
    long long result=0;
    int count=0;
    f1[0]=2;
    f1[1]=3;

    v2d t(2, vector<long long>(2));
    t[0][0]=0;
    t[0][1]=1;
    t[1][0]=1;
    t[1][1]=1;

    if(n==1||n==2){
        result=n;
    }
    else{
        t=pow(t, n-2);
        for(int i=0;i<2;i++){
            result = (result + t[0][i]*f1[i])%MOD;
        }
    }


    unsigned long temp=result;
    /*bitset<35> binary(temp);
    string s_temp=binary.to_string<char,char_traits<char>,allocator<char> >();
    for(int i=0;i<s_temp.length();i++){
        if(s_temp[i]=='1'){
            count++;
        }
    }*/
    while(temp>0){
        if(temp%2!=0){
            count++;
        }
        temp/=2;
    }
    if(count==g){
        printf("CORRECT\n");
    }
    else{
        printf("INCORRECT\n");
    }
}

int main(){
    long t, n;
    int g;
    long long temp;
    scanf("%ld", &t);
    while(t--){
        scanf("%ld%d", &n, &g);
        fib(n,g);
    }

    return 0;
}
