#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){

    return (*(int *)a-*(int *)b);
}

int main(void){

    int t, n, *a, i, temp_count=1, count=0, value;

    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        a=(int *)malloc(n*sizeof(int));

        for(i=0;i<n;i++){

            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        for(i=0;i<n;i++){

            if(a[i]==a[i+1]){

                temp_count++;
            }
            else{

                if(count<temp_count){

                    count=temp_count;
                    value=a[i];
                }

                temp_count=1;
            }
        }

        free(a);

        printf("%d %d\n", value, count);
        count=0;
    }

    return 0;
}
