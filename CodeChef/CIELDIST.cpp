#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int t, ds, dt, d;
    float min_dist=0.0f;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &ds, &dt, &d);

        if((ds+dt)<=d){
            min_dist=d-(ds+dt);
        }
        else if((ds+d)<=dt){
            min_dist=dt-(ds+d);
        }
        else if((d+dt)<=ds){
            min_dist=ds-(d+dt);
        }

        printf("%f\n", min_dist);
        min_dist=0.0f;
    }
}
