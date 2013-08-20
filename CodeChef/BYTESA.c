#include<stdio.h>

int main(){
    int i, j, t, flag=0;
    char *orig, *new_no;
    scanf("%d", &t);
    while(t--){
        scanf("%s", &orig);
        j=0;
        flag=0;
        for(i=0;orig[i]!='\0';i++){
            if(orig[i]=='2'||orig[i]=='4'||orig[i]=='5'||orig[i]=='7'){
                flag=1;
                break;
            }

            if(orig[i]=='0'||orig[i]=='1'||orig[i]=='3'||orig[i]=='8'){
                new_no[j++]=orig[i];
            }
            else if(orig[i]=='6'){
                new_no[j++]='9';
            }
            else{
                new_no[j++]='6';
            }
        }

        if(flag){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(i=j-1;i>=0;i--){
                printf("%c", new_no[i]);
            }
        }
        printf("\n");
        orig=NULL;
        new_no=NULL;
    }

    return 0;
}
