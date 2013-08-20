#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

        int t,n,*w,i, min_no;
        unsigned long long no_of_op=0;

        scanf("%d",&t);

        while(t--){

            scanf("%d",&n);
            w=malloc(n*sizeof(int));

            scanf("%d",&w[0]);
            min_no=w[0];

            for(i=1;i<n;i++){

                scanf("%d",&w[i]);

                if(min_no>w[i]){

                    min_no=w[i];
                }
            }

            if(n==1){
                    no_of_op=0;
            }
            else{

                for(i=0;i<n;i++){

                    no_of_op+=abs(min_no-w[i]);
                }
            }

            printf("%lld\n",no_of_op);
            no_of_op=0;
            free(w);
        }

        return 0;
}
