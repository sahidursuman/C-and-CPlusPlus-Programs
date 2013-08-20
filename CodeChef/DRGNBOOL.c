#include<stdio.h>
#include<math.h>

int main(void){

    int t, n, m, i, c, l, min_chakra=0;
    int si[101]={0}, sf[101]={0};

    scanf("%d", &t);

    while(t--){

        scanf("%d%d", &n, &m);

        while(n--){

            scanf("%d%d", &c, &l);
            si[l]+=c;
        }

        while(m--){

            scanf("%d%d", &c, &l);
            sf[l]+=c;
        }

        for(i=1;i<101;i++){

            if((si[i]-sf[i])<0){

                min_chakra+=abs(si[i]-sf[i]);
            }
        }

        printf("%d\n", min_chakra);

        min_chakra=0;

        for(i=1;i<101;i++){

            si[i]=sf[i]=0;
        }
    }

    return 0;
}
