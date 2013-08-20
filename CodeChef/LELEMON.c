#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int t, n, m, *room_freq, c, *bottles, total_litres;
    int i, j, k, temp, sum_of_litres;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);

        room_freq = (int *)calloc(100, 100*sizeof(int));

        for(i=0;i<m;i++){
            scanf("%d", &temp);
            room_freq[temp]++;
        }

        total_litres=0;

        for(i=0;i<n;i++){
            scanf("%d", &c);

            free(bottles);
            bottles = (int *)malloc(c*sizeof(int));


            if(c<=room_freq[i]){
                sum_of_litres=0;
                for(j=0;j<c;j++){
                    scanf("%d", &bottles[j]);
                    sum_of_litres+=bottles[j];
                }

                total_litres+=sum_of_litres;
            } else {
                for(j=0;j<c;j++){
                    scanf("%d", &bottles[j]);
                }

                qsort(bottles, c, sizeof(int), compare);

                for(k=0;k<room_freq[i];k++){
                    total_litres+=bottles[c-1-k];
                }
            }
        }

        printf("%d\n", total_litres);
    }

    return 0;
}
