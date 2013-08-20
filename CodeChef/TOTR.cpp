#include<iostream>
#include<string>
#include<map>
#include<ctype.h>
using namespace std;

int main(){
    int t;
    string m, str, result;
    char c_small='a', c_cap='A';
    /*c_small++;
    c_cap++;
    cout<<c_small<<c_cap;*/
    map<char,char> alpha_map;
    cin>>t>>m;
    for(int i=0;i<m.length();i++){
        alpha_map.insert(pair<char,char>(c_small,m.at(i)));
        alpha_map.insert(pair<char,char>(c_cap,toupper(m.at(i))));
        c_small++;
        c_cap++;
    }
    while(t--){
        cin>>str;
        result="";
        for(int i=0;i<str.length();i++){
            if(str.at(i)=='_'){
                result.push_back(' ');
            }
            else if(str.at(i)=='.'||str.at(i)==','||str.at(i)=='!'||str.at(i)=='?'){
                result.push_back(str.at(i));
            }
            else{
                result.push_back(alpha_map[str.at(i)]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
