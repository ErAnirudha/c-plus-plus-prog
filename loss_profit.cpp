//Write a program to input cost price and selling price of product and check profit or loss
#include<iostream>
using namespace std;
int main(){
	float BuyingCost,sellingCost,profit,loss;
	cout<<"\nplz enter Buying cost and selling cost of any object"<<endl;  
	cout<<"\nEnter Buying cost of object= ";
	cin>>BuyingCost;
	cout<<"\nEnter selling cost of object= ";
	cin>>sellingCost;
    loss=BuyingCost-sellingCost;
	profit=sellingCost-BuyingCost;	
	if(BuyingCost<sellingCost){
	    cout<<"\nyou are in profit almost= "<<profit<<" Rupees";
	}
	else if(BuyingCost<sellingCost){
		cout<<"\nyou are in loss almost= "<<loss<<" Rupees";
	}	
	else 
		cout<<"\n you have no loss no profit";
	return 0;
}
