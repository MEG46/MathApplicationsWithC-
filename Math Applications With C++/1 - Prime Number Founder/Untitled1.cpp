#include <iostream>
using namespace std;

int main(){
	int num,r;
	while(1){
	int flag=0;
	cout << "Please enter your number : ";
	cin >> num;
	if(num>=0){
	r=num/2;
	for(int i=2;i<=r;i++){
		if(num%i==0){
		  flag=1;
		  break;
		}else{
			continue;
		}
	}
	if(flag==1){
	   cout << num << " is not a prime number!"	<< endl;
	}else{
	   	cout << num << " is a prime number!" << endl;
	}
}else{
	cout << num << " is not a prime number!"	<< endl;
}
}
}