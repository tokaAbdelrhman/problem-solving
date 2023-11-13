#include<iostream>


using namespace std;
int main(){
	int c,t,re=0;cin>>c>>t;int arr[c];
	for(int i=0;i<c;i++){
		cin>>arr[i];
	}
		for(int j=0;j<c;j++){
		 if(arr[j]>=arr[t-1] && arr[j]!=0) re++;
	}
	cout<<re;
	}
	
		
	



