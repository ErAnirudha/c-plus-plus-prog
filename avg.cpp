
#include <iostream>
int main(){
 using namespace std;
float sum, i, n,avg;
cout<<"to find Avg enter 5 no: "<<endl; 	
for (int i=1; i <=5; i++){
  cout << "Enter number= ";
  cin >> n;
  sum = sum + n;
 }
cout << "Sum is " << sum << endl;
avg=sum/5;
cout << "avg is " << avg << endl;
 return 0;
}
