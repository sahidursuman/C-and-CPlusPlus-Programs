#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *arr;
    int i;
    int q, *v, *t;

    // number of elements in array
    scanf("%d", &n);

    arr = (int *)malloc((n+1)*sizeof(int));

    // size of v and t can be atmost 'n'
    v = (int *)malloc((n+1)*sizeof(int));
    t = (int *)malloc((n+1)*sizeof(int));

    // read all elements
    for(i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }



    // number of moves
    q=n;
    printf("%d\n", q);

    for(i=n;i>0;i--){
        // value of v and t
        v=t=i;

        printf("%d %d\n", v, t);
    }

    return 0;
}
