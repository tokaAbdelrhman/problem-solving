#include<iostream>
using namespace std;
int main(){
long long count,re=0;
cin>>count;
int arr[count],i=0;
while(count--){
	
	cin>>arr[i];
	i++;
	
}

for(int i=0;i<count;i++){
	if(arr[i-1]==arr[i]) re++;
}
cout<<re;







}
