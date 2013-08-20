#include<stdio.h>
#include<stdlib.h>

void destroy(char* str, int n);
int count(char* str, int n);

int main(void){

    int t, n, i;
    char str[1001];

    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        scanf("%s", &str);

        destroy(str, n);

        printf("%d\n",count(str, n));
    }

    return 0;
}

void destroy(char* str, int n){

    int i;

    if(str[0]=='1'){

        str[0]='5';

        if(str[1]!='1'){

            str[1]='5';
        }
    }

    if(str[n-1]=='1'){

        str[n-1]='5';

        if(str[n-2]!='1'){

            str[n-2]='5';
        }
    }

    if(n>1){

        for(i=1;i<n-1;i++){

            if(str[i]=='1'){

                str[i-1]=str[i]='5';

                if(str[i+1]!='1'){

                    str[i+1]='5';
                }
            }
        }
    }

    return;
}

int count(char* str, int n){

    int i, count=0;

    for(i=0;i<n;i++){

        if(str[i]=='0'){

            count++;
        }
    }

    return count;
}
