#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int c,i=0;
	cin>>c;
	int arr[c];
	for(int i=0;i<c;i++){
		cin>>arr[i];i++;
	}
	sort(arr,arr+c); bool re=true;
	for(int i=0;i<c;i++){
		if(arr[i]!=i+1) {
		re=false; break;
		}
	}
	if(re) cout<<"Yes";
	else cout<<"No";
}
