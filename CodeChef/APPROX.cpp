#include<iostream>
#include<string>
using namespace std;

const int DENR=33102;

int main(){
    int t, k, numr, quo, rem;
    string pi;
    cin>>t;
    while(t--){
        cin>>k;
        if(k==0){
            cout<<3<<endl;
        }
        else{
            numr=103993;
            pi="3.";
            numr=(numr%DENR)*10;
            for(int i=1;i<=k;i++){
                quo=numr/DENR;
                numr=(numr%DENR)*10;
                pi.push_back('0'+quo);
            }
            cout<<pi<<endl;
        }
    }
    return 0;
}
