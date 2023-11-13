#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){

	int count;
	cin>>count;
   long long arr[count];
   for(int i=0;i<count;i++){
   	cin>>arr[i];
   }
   sort(arr,arr+count);
   cout<<arr[count-1];
   
	
}
