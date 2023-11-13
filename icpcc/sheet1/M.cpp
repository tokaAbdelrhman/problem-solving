

#include<iostream>
using namespace std;
int main(){
	int num ,re=0;
	cin>>num;
	int arr[5]={100,20,10,5,1};
	for(int i=0;i<5;i++){
		re+=num /arr[i];
		num =num %arr[i];
	}
	cout<<re;
}
