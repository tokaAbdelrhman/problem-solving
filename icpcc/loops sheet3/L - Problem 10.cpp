#include<iostream>
using namespace std;
int main(){
	int count ,re=0;
	cin>>count;
	while(count--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		if(n1+n2+n3>=2) re++;
	}
	cout<<re;
}
