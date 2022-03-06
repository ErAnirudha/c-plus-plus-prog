//print reverse no
#include<iostream>
using namespace std;
int main(){
	long num,remainder,reverse=0;
	cout<<"Enter a no= ";
	cin>>num;
	while(num!=0){
	remainder=num%10;
	reverse= remainder+reverse*10;
	num/=10;
	}
	cout<<"\nreverse="<<reverse;
	return 0;
}
