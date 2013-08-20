#include<stdio.h>
#include<stdlib.h>

int main(){
    int t, *a, i, cost;
    char s[201];
    scanf("%d", &t);
    while(t--){
        scanf("%s", &s);
        a=(int*)calloc(123, 123*sizeof(int));
        for(i=0;s[i]!='\0';i++){
            a[s[i]]+=1;
        }
        cost=0;
        for(i=65;i<=90;i++){
            if(a[i]==1){
                cost+=1;
            }
            else if(a[i]%2==0){
                cost+=a[i]/2;
            }
            else{
                cost+=(a[i]/2)+1;
            }
        }
        for(i=97;i<=122;i++){
            if(a[i]==1){
                cost+=1;
            }
            else if(a[i]%2==0){
                cost+=a[i]/2;
            }
            else{
                cost+=(a[i]/2)+1;
            }
        }
        printf("%d\n", cost);
        free(a);
    }
    return 0;
}
