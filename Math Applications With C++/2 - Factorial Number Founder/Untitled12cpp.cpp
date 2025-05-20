#include <iostream>
using namespace std;
int factor(int num){
	if(num==1||num==0){
		return 1;
	}
	return num * factor(num-1);
}
int main(){
	int num;
	int fact=1;
	while(1){
	cout << "Please enter your number : ";
	cin >> num;
	if(num>=0){
	fact=factor(num);
	cout << num << "!= " << fact << endl;
}else{
	cout << "Invalid Process! Please try again!" << endl;
}
}
}