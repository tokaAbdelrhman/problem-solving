#include<iostream>
using namespace std;
int main(){
	long long n1,n2,count=0;cin>>n1>>n2;
	if((n1*2)>n2 &&n1!=n2) cout<<-1;
//	else if (n1==n2) cout<<0;
else{
	while(n2>n1){
		if(count%2==0) {n1=n1*2;
		count++;
		}
		else {n1=n1*3;
		count++;
		}
		
		
		
	}
	cout<<count;
}
}
