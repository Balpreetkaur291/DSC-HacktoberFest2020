#include<iostream>
using namespace std;
char getMaxOccuringChar(string s){
		int arra[26];
		int c=-1,i=0,k=0;
		for(i=0;i<26;i++){
			arra[i]=0;
			}
		for(i=0;i<s.length();i++)
			++arra[tolower(s[i])-97];
		for(i=0;i<26;i++){
			if(c<arra[i]){
				c=max(c,arra[i]);
				k=i;
				}
			}
			return char(k+97);
		}
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		cout<<getMaxOccuringChar(s)<<endl;
		}
	return 0;
	}	
