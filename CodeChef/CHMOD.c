#include<stdio.h>
#include<stdlib.h>

#define MAX_D2 100001L

int a[100][100001]={0};
int b[100][100001]={0};

long long calc_power(int a, int b, int mod);

int main(){
    int n;

    // primes less than 100
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int i, j, temp;

    int t;
    int li, ri;
    int mod;

    int power;
    long long result;

    // number of elements
    scanf("%d", &n);
    // read all elements
    for(i=1;i<=n;i++){
        scanf("%d", &temp);

        // find prime factors
        for(j=0;j<25;j++){
            if(temp>=prime[j]){
                while(temp%prime[j]==0){
                    temp/=prime[j];
                    a[prime[j]][i]++;
                }
            } else{
                break;
            }
        }
    }

    // find cumulative sum of powers of prime factors
    for(i=0;i<25;i++){
        for(j=1;j<=n;j++){
            b[prime[i]][j] = b[prime[i]][j-1] + a[prime[i]][j];
        }
    }

    /*for(i=0;i<25;i++){
        for(j=1;j<=n;j++){
            printf("%d ", b[prime[i]][j]);
        }

        printf("\n");
    }*/

    // number of test-cases
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &li, &ri, &mod);
        result=1L;

        // find powers of all primes between li and ri
        for(i=0;i<25;i++){
            power = b[prime[i]][ri] - b[prime[i]][li-1];
            result=(result*calc_power(prime[i], power, mod))%mod;
        }

        printf("%ld\n", result%mod);
    }

    return 0;
}

long long calc_power(int a, int b, int mod){
	long long result=1;
	while(b>0){
		if(b&1){
            result=(result*(long long)a)%mod;
		}

		a=((long long)a*a)%mod;
		b/=2;
	}
	return result;
}
