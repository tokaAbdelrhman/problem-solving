#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int c;
	cin>>c;
	while(c--){
		int co;
		cin>>co;
		int arr[co];
	for(int i=0;i<co;i++){
		cin>>arr[co];
	}
	sort(arr,arr+co);
	int f=1;
	for(int l=0;l<co;l++){
		if(arr[l]==arr[l+1]) {f=0; break;
		} 
	}
	if(f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	}

}
