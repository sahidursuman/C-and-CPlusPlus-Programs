#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string s;

    cin>>t;
    while(t--){
        cin>>s;
        int length = s.length(), half_length = length/2, check_array[26]={0}, flag=0;
        for(int i=0, j=half_length; i<half_length, j<length; i++, j++){
            check_array[s[i]-97]++;
            check_array[s[j]-97]++;
        }

        for(int i=0; i<26; i++){
            if(check_array[i]%2==0){

            }
            else{
                flag=1;
                break;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
