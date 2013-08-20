#include<iostream>
#include<string>
using namespace std;

int main(){
    int t, n;
    string a, b, child_concat;
    cin>>t;
    while(t--){
        int parent[26]={0};
        int children_[26]={0};
        int i=0;
        child_concat="";
        cin>>a>>b;
        a+=b;
        cin>>n;

        string children[n];
        for(i=0;i<n;i++){
            cin>>children[i];
            child_concat+=children[i];
        }

        for(i=0;i<child_concat.size();i++){
            children_[child_concat[i]-'a']++;
        }

        for(i=0;i<a.size();i++){
            parent[a[i]-'a']++;
        }

        for(i=0;i<26;i++){
            if(children_[i]!=0&&(children_[i]>parent[i])){
                break;
            }
        }

        if(i!=26){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
