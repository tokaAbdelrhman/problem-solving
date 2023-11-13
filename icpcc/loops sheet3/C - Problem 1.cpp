#include<iostream>
using namespace std;
int main(){

	int count,ev=0,od=0,ps=0,neg=0;
	cin>>count;
	while(count--){
		long long num;
		cin>>num;
		if(num==0||num%2==0) ev++;
		 if(num%2!=0) od++;
	    if(num>0) ps++;
		 if(num<0) neg++;
		
	}
	cout<<"Even: "<<ev<<endl;
	cout<<"Odd: "<<od<<endl;
	cout<<"Positive: "<<ps<<endl;
	cout<<"Negative: "<<neg<<endl;
}
