#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long c;cin>>c;
	while(c--){
		long long co;cin>>co;	long long arr[co];
	for(int i=0;i<co;i++) {cin>>arr[i];
	}
		sort(arr,arr+co); 
			long long re=0;
	     for(int j=0;j<co;j++) {
	     	re+=(arr[j]-arr[0]);
	}
	cout<<re<<endl;
	
	}
}
