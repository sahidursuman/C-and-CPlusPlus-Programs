#include<stdio.h>

int main(){
    int t;
    float d;
    int u, n;
    int m;
    float r;
    int c;
    int i;

    float last_month_cost;
    float new_plan_cost;
    float saving;
    int best_plan;

    scanf("%d", &t);

    while(t--){
        scanf("%f%d%d", &d, &u, &n);
        last_month_cost = d*u;

        saving = 0.0f;
        best_plan=0;

        for(i=0;i<n;i++){
            scanf("%d%f%d", &m, &r, &c);

            new_plan_cost = c + m*r*u;
            if((new_plan_cost<m*last_month_cost)&&(saving<(m*last_month_cost - new_plan_cost)/m)){
                saving = (m*last_month_cost - new_plan_cost)/m;
                best_plan = i+1;
            }
        }

        printf("%d\n", best_plan);
    }

    return 0;
}

