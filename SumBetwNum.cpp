//Write  program to find the sum of all integer between 100 and 750 which are divisible by 9.
#include<iostream>
using namespace std;
int main(){
	int x,sum;
for(int x=100;x<=750;x++)
     {
	if(x%9==0){
	
				cout<<"\n"<<x;
				sum+=x;	 
	         }  
     }
cout<<"\tsum:"<<sum;
return 0;
 }

