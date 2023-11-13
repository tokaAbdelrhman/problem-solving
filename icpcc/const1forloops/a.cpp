
#include<iostream>
using namespace std;
int main(){
	long long count,re=0;
	cin>>count;
	while(count--){
    	long long c,s;
		cin >>c>>s;
		while(c--){
		long long s1;
		cin>>s1;
		if(s1<=0) re++;
		} 
		if(re>=s) cout<<"NO"<<endl;
    	else     cout<<"YES"<<endl;
	}
	
	
}
