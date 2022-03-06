#include<iostream>
#include<string>
using namespace std;
int main(){
	string months;
	cout<<"\nEnter months name to know containg days in that months: ";
	cout<<"\nyou can enter month name from jan to dec";
	cout<<"\nEnter months name:="; 
	cin>>months;
	if(months=="jan"){
		cout<<"jan months contain 31 days";
	}
    if(months=="feb"){
		cout<<"feb months contain 28 or 29 days";
	}
	if(months=="mar"){
		cout<<"mar months contain 31 days";
	}
	if(months=="apr"){
		cout<<"apr months contain 30 days";
	}
	if(months=="may"){
		cout<<"may months contain 31 days";
	}
	if(months=="jun"){
		cout<<"jun months contain 30 days";
	}
	if(months=="july"){
		cout<<"july months contain 31 days";
	}
	if(months=="aug"){
		cout<<"aug months contain 31 days";
	}
	if(months=="sep"){
		cout<<"sep months contain 30 days";
	}
	if(months=="oct"){
		cout<<"oct months contain 31 days";
	}
	if(months=="nov"){
		cout<<"nov months contain 30 days";
	}
	if(months=="dec"){
		cout<<"dec months contain 31 days";
	}

	return 0;
	
}
