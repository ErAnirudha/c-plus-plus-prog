/*Write a program to take input of marks of subject  like Hindi, Marathi, Mathematics and English and History , Calculate the percentage and display the grade based on conditions below 
If percentage >= 70% : Distinction
if Percentage >=60 : First class
if Percentage >=50 Second class
if Percentage >=40 Pass 
if percentage <=35 fail */
#include<iostream>
using namespace std;
int main(){
	float student,total_marks,Hindi,marathi,mathematics,English,History,per;
	cout<<"**student percentage and Grade calculator**"<<endl;
	cout<<"\n**Enter marks for differnent subject out of 100**"<<endl;
	cout<<"\n**subject contains Hindi,marathi,Mathematics,English,History**"<<endl;
	cout<<"\nEnter marks for Hindi=";
	cin>>Hindi;
	cout<<"\nEnter marks for marathi=";
	cin>>marathi;
	cout<<"\nEnter marks for mathematics=";
	cin>>mathematics;
	cout<<"\nEnter marks for History=";
	cin>>History;
	cout<<"\nEnter marks for English=";
	cin>>English;
	total_marks=Hindi+marathi+mathematics+History+English;
	cout<<"\n\tyou got total marks "<<total_marks<<" out of 500 ";
	per=(total_marks*100/500);
	cout<<"\n\tpercentage="<<per<<" %";
	if(per>=70){
		cout<<"\n\tResult:you got Distinction";
	}
	else if(per>=60){
		cout<<"\n\tResult:you got First class score";
	}
	else if(per>=50){
		cout<<"\n\tResult:you got Second class score";
	}
	else if(per>=40){
		cout<<"\n\tResult:you are pass";
        }
	else if(per<35){
			cout<<"\n\tResult:you are fail try next time";
	
	}
		return 0;	
}

