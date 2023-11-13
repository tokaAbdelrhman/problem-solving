#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void sortt(int count , int arr[]){
	
     sort(arr,arr + count);
     for(int i=0;i<count;i++){
     	cout<<arr[i]<<" ";
	 }
}
int main(){
	int count;cin>>count; int arr[count];
	for(int l=0;l<count;l++){
		cin>> arr[l];
	}
 sortt( count ,arr);
	

}
