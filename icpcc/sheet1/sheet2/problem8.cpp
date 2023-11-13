#include<iostream>
using namespace std;
int main(){
int  num1,num2,n1=0,n2=0,n3=0;
	
	cin>>num1>>num2;
	n1=num1+num2;
	n2=num1-num2;
	n3=num1*num2;
	if(n1>=n2&&n1>=n3) cout<<n1;
    else if(n2>=n1&&n2>=n3) cout<<n2;
    else cout<<n3;

	
}
