#include <iostream>
using namespace std;

void invalid(){
	cout << "Invalid Process! Please enter again!" << endl;
}
double addition(double num1,double num2){
	return num1 + num2;
}
double subs(double num1,double num2){
	return num1 - num2;
}
double mult(double num1,double num2){
	return num1 * num2;
}
double divi(double num1,double num2){
	return num1 / num2;
}
int mod(double num1,double num2){
	return (int)num1 % (int)num2;
}
void print(double num1,char ch,double num2,double result){
	cout << num1 << " " <<  ch << " " << num2 << " = "  << result << endl;
}
int main(){
	int flag=0;
	double num1,num2,result=0;
	char ch;
	while(1){
		
	if(flag==0){
		cin >> num1 >> ch >> num2;
	}else{
		num1=result;
		cout << num1;
		cin >> ch >> num2;
	}
		if(ch=='+'){
			result = addition(num1,num2);
			print(num1,ch,num2,result);
		}else if(ch=='-'){
			result = subs(num1,num2);
			print(num1,ch,num2,result);
		}else if(ch=='*'||ch=='X'||ch=='x'){
			result = mult(num1,num2);
			print(num1,ch,num2,result);
		}else if(ch=='/'){
			if(num2==0){
				invalid();
			}else{
			result = divi(num1,num2);
			print(num1,ch,num2,result);
		}
		}else if(ch=='%'){
			if(num2==0){
				invalid();
			}
			result = mod(num1,num2);
			print(num1,ch,num2,result);
		}else{
			invalid();
		}
		flag++;
	}
}