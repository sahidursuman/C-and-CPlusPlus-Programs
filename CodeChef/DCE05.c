#include<stdio.h>
#include<stdlib.h>

long win_pos(long n);

int main(void){

    long t, *a, i;

    scanf("%ld", &t);

    a=(long*)malloc(t*sizeof(long));

    for(i=0;i<t;i++){

        scanf("%ld",&a[i]);
    }

    for(i=0;i<t;i++){

        printf("%ld\n", win_pos(a[i]));
    }

    free(a);
    return 0;
}

long win_pos(long n){

    long win_position=1;

    while(win_position*2<=n){

        win_position*=2;
    }

    return win_position;
}
