#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long  d1,d2,d3 ,re1=0,re2=0,re3=0,re4=0,ans=0;
	cin>>d1>>d2>>d3;
   re1=d1+d2+d3;
   
    re2=2 * d2+ 2*d1;
     re3=2 * d1+ 2*d3;
      re4=2 * d2+ 2*d3;
      ans=min(re1,re2);
      ans=min(ans,re3);
      ans=min(ans,re4);
      
      cout<<ans;
      
}
