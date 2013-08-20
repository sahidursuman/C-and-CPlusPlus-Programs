#include<stdio.h>

int main(void){

    int num;
    for(;scanf("%d",&num),(num>=0&&num!=42);printf("%d\n",num));

    return 0;
}
