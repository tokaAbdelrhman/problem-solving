#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long c;
	cin>>c;
	long long arr1[c],arr2[c];
	for(int i=0;i<c;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<c;i++){
		cin>>arr2[i];
	}
	long long sum=0;
	
   for(int i=0;i<c;i++){
		sum+= arr1[i] * arr2[i];
	}
	if(sum) cout<<"No";
	else cout<<"Yes";}
