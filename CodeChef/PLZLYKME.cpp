#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    int l, d, s, c;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d", &l, &d, &s, &c);

        // starting likes
        long long total_likes=s;

        for(int i=1;i<=d&&total_likes<l;i++){
            if(i!=d){
                total_likes=total_likes + c*total_likes;
            }
        }

        if(total_likes>=l){
            //cout<<total_likes<<endl;
            printf("ALIVE AND KICKING\n");
        } else {
            //cout<<total_likes<<endl;
            printf("DEAD AND ROTTING\n");
        }
    }

    return 0;
}
