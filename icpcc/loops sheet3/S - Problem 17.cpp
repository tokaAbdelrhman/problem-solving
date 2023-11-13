#include<iostream>
using namespace std;
int main(){
	long long n1,n2;cin>>n1>>n2;
	while(n2--){
		if(n1%10!=0)  n1=n1-1;
		else n1=n1/10;
		
	}
	cout<<n1;
}
