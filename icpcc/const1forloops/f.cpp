#include<iostream>
using namespace std;
int main(){
long long   re=0, num;
	cin>>num;

	if(num==1) cout<<1;
else {
	 for(int i=0;i<=num;i++){
		re+=(i*(i+1))/2;
		
		if(re>=num){  cout<<i-1;
	
		break;
		}
}
	
}
}
