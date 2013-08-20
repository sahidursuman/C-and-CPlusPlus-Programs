#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void* a, const void* b){

    return(*(int *)a - *(int *)b);
}

int main(void){

    int t, n;
    register int i, j;
    register long *skill=NULL, min;

    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        skill=malloc(n*sizeof(long));

        for(i=0;i<n;i++){

            scanf("%ld",&skill[i]);
        }

        qsort(skill, n, sizeof(long), compare);

        min=abs(skill[0]-skill[1]);

        for(i=0;i<n-1;i++){

            if(min>abs(skill[i]-skill[i+1])) min=abs(skill[i]-skill[i+1]);
        }

        free(skill);
        printf("%d\n", min);
    }
}
