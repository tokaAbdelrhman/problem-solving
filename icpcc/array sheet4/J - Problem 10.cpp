#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long c;cin>>c;
	while(c--){
		long long co;cin>>co;	long long arr[co*2];
	for(int i=0;i<co*2;i++) {cin>>arr[i];
	}
		long long re1=0,re=0;
		
	     for(int j=0;j<co ;j++) {
	     	re+=arr[j];
	}
	
	 for(int n=co+1;n<co*2 ;n++) {
	     	re1+=arr[n];
	}
	if(re1%2!=0 &&re%2!=0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	}
}
