#include<iostream>
#include<string>
using namespace std;

int main(){
	int t, c, len, i, j, k, n, flag;
	char orig[50][50];
	string s;
	cin>>t;
	while(t--){
		cin>>c>>s;
		len=s.length();
		n=0;
		j=k=0;
		flag=0;
		for(i=0;i<len;i++){
			if(flag==0){
				orig[j][k]=s[i];
				n++;
				if(n<c){
					k++;
				}
				else{
					j++;
					n=0;
					flag=1;
				}
			}
			else{
				orig[j][k]=s[i];
				n++;
				if(n<c){
					k--;
				}
				else{
					j++;
					n=0;
					flag=0;
				}
			}
		}
		for(i=0;i<c;i++){
			for(k=0;k<j;k++){
				cout<<orig[k][i];
			}
		}
		cout<<endl;
	}
	return 0;
}
