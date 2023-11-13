#include<iostream>
using namespace std;
int main(){

	long long  count;
	cin>>count;
		
	while(count--){
		long long re=1;
	long long rating;
	cin>>rating;
	
	for(int i=1;i<=rating;i++)
	{
		re*=i;
	}
	cout<<re<<endl;
	
	}
	
}
