#include<iostream>
using namespace std;
int main(){
	float units;
	string consumerName,MeterNo;
	cout<<"\nEnter consumer name:= ";
    getline(cin, consumerName);
    cout<<"\nEnter MeterNo := ";
    getline(cin, MeterNo);
	cout<<"\nEnter No of Units consumed this Month:= ";
	cin>>units;
	cout<<"\nNO of units consumed := "<<units<<" units";

	if(units<=75){
		units=units*1;
		cout<<"\nconsumer Electricity Bill: = "<<units<<" Rupees";
	}
	else if(units>75 && units<=150){
		units=units*2-75;
		cout<<"\nconsumer Electricity Bill: = "<<units<<" Rupees";
	}
	else if(units>150 && units<=250){
		units=units*3-75-150;
		cout<<"\nconsumer Electricity Bill: = "<<units<<" Rupees";
	}
	else if(units>250){
		units=units*4-75-150-250;
		cerr<<"\nconsumer Electricity Bill: = "<<units<<" Rupees";
	
	}
	
		return 0;
}
