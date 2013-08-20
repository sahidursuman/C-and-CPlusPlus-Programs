#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<map>
using namespace std;

int main(){
    int i=0;
    long n, m, vote1=0, vote2=0, max1=0, max2=0;
    string max_chef, max_country, temp_max_chef;
    scanf("%ld%ld", &n, &m);
    string chef;
    string country;
    string subject;
    map<string, int> map1;
    map<string, string> map2;
    map<string, int> map3;

    while(i<n){
        cin>>chef>>country;
        map1.insert(pair<string, int>(chef, vote1));
        map2.insert(pair<string, string>(chef, country));
        map3.insert(pair<string, int>(country, vote2));
        i++;
    }

    i=0;
    while(i<m){
        cin>>subject;
        vote1=map1[subject];
        map1[subject]=++vote1;

        vote2=map3[map2[subject]];
        map3[map2[subject]]=++vote2;

        if(max1<vote1){
            max1=vote1;
            max_chef=subject;
        }
        else if(max1==vote1){
            if(max_chef<subject){

            }
            else{
                max_chef=subject;
            }
        }

        if(max2<vote2){
            max2=vote2;
            max_country=map2[subject];
        }
        else if(max2==vote2){
            if(max_country<map2[subject]){

            }
            else{
                max_country=map2[subject];
            }
        }

        i++;
    }

    cout<<max_country<<endl<<max_chef;

    return 0;
}
