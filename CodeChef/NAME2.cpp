#include<iostream>
#include<string>
using namespace std;

string answer(string s1, string s2, int l1);

int main(){
    int t, l1, l2;
    string s1, s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        l1=s1.size();
        l2=s2.size();

        if(l1==l2&&s1==s2){
            cout<<"YES\n";
        }
        else if(l1==l2&&s1!=s2){
            cout<<"NO\n";
        }
        else if(l1>l2){
            //cout<<answer(s2,s1,l2)<<endl;
            int pos=0,i=0;
            pos=s1.find_first_of(s2[i++],pos);
            while(pos!=string::npos&&i<l2){
                pos=s1.find_first_of(s2[i++],pos+1); //at or after position 'pos'
            }
            if(i==l2&&pos!=-1){ //if last matches then pos!=-1, npos is -1
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            //cout<<answer(s1,s2,l1)<<endl;
            int pos=0,i=0;
            pos=s2.find_first_of(s1[i++],pos);
            while(pos!=string::npos&&i<l1){
                pos=s2.find_first_of(s1[i++],pos+1); //at or after position 'pos'
            }
            if(i==l1&&pos!=-1){ //if last matches then pos!=-1, npos is -1
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}

string answer(string s1, string s2, int l1){
    int pos=0,i=0;
    pos=s2.find_first_of(s1[i++],pos);
    while(pos!=string::npos&&i<l1){
        pos=s2.find_first_of(s1[i++],pos+1); //at or after position 'pos'
    }
    if(i==l1&&pos!=-1){ //if last matches then pos!=-1, npos is -1
        return "YES";
    }
    else{
        return "NO";
    }
}
