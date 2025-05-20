#include <iostream>
using namespace std;
void invalid(){
	cout << "Invalid Process! Please enter again!" << endl;
}
int factor(int num){
	if(num==1 || num==0){
		return 1;
	}
	return num * factor(num-1);
}
int main(){
	while(1){
	int num1,num2,fact,chc,temp;
	cout << "The Factorial Calculator" << endl;
	cout << "1 - Factorial Of A Number\n2 - Permutation Of Two Numbers\n3 - Combination Of Two Numbers\n";
	cout << "Please enter your process : ";
	cin >> chc;
	if(chc==1){
		cout << "Please enter your number : ";
		cin >> num1;
		if(num1>=0){
		fact = factor(num1);
		cout << num1 << "!=" << fact << endl;
	}else{
		invalid();
	}
	}else if(chc==2){
		cout << "Please enter the first number : ";
		cin >> num1;
		cout << "Please enter the second number : ";
		cin >> num2;
		if(num1>=0&&num2>=0){
			if(num2>num1){
				temp=num1;
				num1=num2;
				num2=temp;
			}
		fact = factor(num1) / factor(num1-num2);
		cout << "P("<< num1 << "," << num2  << ")=" << fact << endl;
	}else{
		invalid();
	}
	}else if(chc==3){
		cout << "Please enter the first number : ";
		cin >> num1;
		cout << "Please enter the second number : ";
		cin >> num2;
		if(num1>=0&&num2>=0){
			if(num2>num1){
				temp=num1;
				num1=num2;
				num2=temp;
			}
		fact = factor(num1) / (factor(num2) * factor(num1-num2));
		cout << "C("<< num1 << "," << num2  << ")=" << fact << endl;
	}else{
		invalid();
	}
	}else{
		invalid();
	}
}
	}
