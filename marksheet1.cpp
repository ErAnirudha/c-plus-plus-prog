#include<iostream>
#include<string>
using namespace std;
 	int main()
 	{
 		string name,grade;
 		cout<<"Enter student name: ";
 		getline(cin,name);
		float avg,percentage;
		bool isStudentPass = true;
		cout<<"Enter Your 10 subject marks below out of 100.\n";
		string subject[]={"Marathi  ","Hindi    ","English  ","Geography","Science  ","Physics  ","Chemistry","History  ","Math     ","Psycology"};
		float marks[10];
	   	float sum=0;
	   	int numberOfSubjectsFailed=0;
	   	for(int i=0; i<=9; i++)
	   	{
			cout<< subject[i] << " : ";
		 	cin>>marks[i];
		 	sum=sum+marks[i];
		 	if(marks[i]<40)
		 	{
		 		numberOfSubjectsFailed++;
		 		isStudentPass = false;
			}
	  	}
		percentage=(sum/1000)*100;
	   	/*cout<<"Total marks obtained ="<<sum<<endl;
	   	cout<<" Avg Marks ="<<avg<<endl;
	    cout<<" percentage ="<< percentage<<"%"<<endl;*/
	    if(isStudentPass)
	   	{
	   		if(percentage>85)
			{
	   	   	//cout<<"first class with grade A"<<endl;
	   	   	grade = "A+";
	   	   	
	   		}
	   		else if(percentage>75)
			{
	   	   	//cout<<"first class with grade A"<<endl;
	   	   		grade = "A";
	   		}
	   		else if(percentage>60)
			{
	   		   	grade = "B";
	   		}
	   		else if(percentage>40)
			{
	   		   	grade = "C";
	   		}
		}
	   	cout<<"_________________________"<<endl;
	   	cout<<"Student Name : " <<"\t"<<name<<endl;
	   	cout<<"SUBJECT"<<"\t\t"<<"MARKS"<<endl;
	   	for(int i=0;i<10;i++)
	   	{
	   		cout<<subject[i]<<"\t\t"<<marks[i]<<" / 100"<<endl;
		}
	   	cout<<"_________________________"<<endl;
	   	cout<<"Total Marks : "<<"\t"<<sum<<" / 1000"<<endl;
	   	cout<<"Percentage  : "<<"\t"<<percentage<<"%"<<endl;
	   	cout<<"_________________________"<<endl;
	   	if(isStudentPass)
	   	{
	   		cout<<"Congratulations..! You passed with Grade : "<<"\t"<<grade<<endl;
		}
		else if(numberOfSubjectsFailed<=3)
		{
	   		cout<<"Congratulations..! You passed with A.T.K.T. "<<"\t"<<grade<<endl;
		}
		else
		{
	   		cout<<"You are failed..! Please try again."<<endl;
		}
	   	cout<<"_________________________";
	  	return 0;
	}
