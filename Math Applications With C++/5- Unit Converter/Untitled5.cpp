#include <iostream>
using namespace std;
double mmtocm(int mm){
	return 0.1 * mm;
}
double mmtom(int mm){
	return 0.001 * mm;
}
double mmtokm(int mm){
	return 0.000001 * mm;
}
double mmtoin(int mm){
	return 0.03937 * mm;
}
double mmtoft(int mm){
	return 0.003281 * mm;
}
double mmtoyard(int mm){
	return 0.001094 * mm;
}
double mmtomiles(int mm){
	return 0,0000621 * mm;
}
double cmtomm(int cm){
	return 10 * cm;
}
double cmtom(int cm){
	return 0.01 * cm;
}
double cmtokm(int cm){
	return 0.00001 * cm;
}
double cmtoin(int cm){
	return 0.393701 * cm;
}
double cmtoft(int cm){
	return 0.032808 * cm;
}
double cmtoyard(int cm){
	return 0.001094 * cm;
}
double cmtomiles(int cm){
	return 0.000006 * cm;
}
double mtomm(int m){
	return 1000 * m;
}
double mtocm(int m){
	return 100 * m;
}
double mtokm(int m){
	return 0.001 * m;
}
double mtoin(int m){
	return 39.37008 * m;
}
double mtoft(int m){
	return 3.28084 * m;
}
double mtoyard(int m){
	return 1.093613 * m;
}
double mtomiles(int m){
	return 0.000621 * m;
}
double kmtomm(int km){
	return 1000000 * km;
}
double kmtocm(int km){
	return 100000 * km;
}
double kmtom(int km){
	return 1000 * km;
}
double kmtoin(int km){
	return 39370.08 * km;
}
double kmtoft(int km){
	return 3280.84 * km;
}
double kmtoyard(int km){
	return 1093.613 * km;
}
double kmtomiles(int km){
	return 0.621371 * km;
}
double intomm(int in){
	return 25.4 * in;
}
double intocm(int in){
	return 2.54 * in;
}
double intom(int in){
	return 0.0254 * in;
}
double intokm(int in){
	return 0.000025 * in;
}
double intoft(int in){
	return 0.083333 * in;
}
double intoyard(int in){
	return 0.027778 * in;
}
double intomiles(int in){
	return 0.000016 * in;
}
double fttomm(int ft){
	return 304.8 * ft;
}
double fttocm(int ft){
	return 30.48 * ft;
}
double fttom(int ft){
	return 0.3048 * ft;
}
double fttokm(int ft){
	return 0.000305 * ft;
}
double fttoin(int ft){
	return 12 * ft;
}
double fttoyard(int ft){
	return 0.333333 * ft;
}
double fttomiles(int ft){
	return 0.000189 * ft;
}
double yardtomm(int yd){
	return 914.4 * yd;
}
double yardtocm(int yd){
	return 91.44 * yd;
}
double yardtom(int yd){
	return 0.9144 * yd;
}
double yardtokm(int yd){
	return 0.000305 * yd;
}
double yardtoin(int yd){
	return 36 * yd;
}
double yardtoft(int yd){
	return 3 * yd;
}
double yardtomiles(int yd){
	return 0.000568 * yd;
}
double milestomm(int mi){
	return 1609344 * mi;
}
double milestocm(int mi){
	return 160934.4 * mi;
}
double milestom(int mi){
	return 1609.344 * mi;
}
double milestokm(int mi){
	return 1.609344 * mi;
}
double milestoin(int mi){
	return 63360 * mi;
}
double milestoft(int mi){
	return 5280 * mi;
}
double milestoyard(int mi){
	return 1760 * mi;
}
void lists(string arr[7]){
	for(int i=0;i<7;i++){
		cout << i+1 << " - " << arr[i] << endl;
	}
}
void menu(string arr[8]){
	for(int i=0;i<8;i++){
		cout << i+1 << " - " << arr[i] << endl;
	}
}
void invalid(){
	cout << "Invalid Process! Please try again!" << endl;
}
void print(double num, double result,string c,string c1){
	cout << num << " " << c << " = " << result << " " << c1 << endl;
}
int main(){
	double num;
	int ch1,ch2;
	double result;
	string arr[8] = {"mm","cm","m","km","in","ft","yd","mi"};
	string arr1[7] = {"mm to cm","mm to m","mm to km","mm to in","mm to ft","mm to yard","mm to miles"};
	string arr2[7] = {"cm to mm","cm to m","cm to km","cm to in","cm to ft","cm to yard","cm to miles"};
	string arr3[7] = {"m to mm","m to cm","m to km","m to in","m to ft","m to yard","m to miles"};
	string arr4[7] = {"in to mm","in to cm","in to m","in to km","in to ft","in to yard","in to miles"};
	string arr5[7] = {"km to mm","km to cm","km to m","km to in","km to ft","km to yard","km to miles"};
	string arr6[7] = {"ft to mm","ft to cm","ft to m","ft to km","ft to in","ft to yard","ft to miles"};
	string arr7[7] = {"yard to mm","yard to cm","yard to m","yard to km","yard to in","yard to ft","yard to miles"};
	string arr8[7] = {"miles to mm","miles to cm","miles to m","miles to km","miles to in","miles to ft","miles to yard"};
	while(1){
	cout << "The Length Conventor : " << endl;
	menu(arr);
	cout << "Please enter your choice : ";
	cin >> ch1;
	if(ch1==1){
		lists(arr1);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	    cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=mmtocm(num);
	    	print(num,result,arr[0],arr[1]);
		}else if(ch2==2){
	    	result=mmtom(num);
	    	print(num,result,arr[0],arr[2]);
		}else if(ch2==3){
	    	result=mmtokm(num);
	    	print(num,result,arr[0],arr[3]);
		}else if(ch2==4){
	    	result=mmtoin(num);
	    	print(num,result,arr[0],arr[4]);
		}else if(ch2==5){
	    	result=mmtoft(num);
	    	print(num,result,arr[0],arr[5]);
		}else if(ch2==6){
	    	result=mmtoyard(num);
	    	print(num,result,arr[0],arr[6]);
		}else if(ch2==7){
	    	result=mmtomiles(num);
	    	print(num,result,arr[0],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==2){
		lists(arr2);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	    cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=cmtomm(num);
	    	print(num,result,arr[1],arr[0]);
		}else if(ch2==2){
	    	result=cmtom(num);
	    	print(num,result,arr[1],arr[2]);
		}else if(ch2==3){
	    	result=cmtokm(num);
	    	print(num,result,arr[1],arr[3]);
		}else if(ch2==4){
	    	result=cmtoin(num);
	    	print(num,result,arr[1],arr[4]);
		}else if(ch2==5){
	    	result=cmtoft(num);
	    	print(num,result,arr[1],arr[5]);
		}else if(ch2==6){
	    	result=cmtoyard(num);
	    	print(num,result,arr[1],arr[6]);
		}else if(ch2==7){
	    	result=cmtomiles(num);
	    	print(num,result,arr[1],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==3){
		lists(arr3);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	    cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=mtomm(num);
	    	print(num,result,arr[2],arr[0]);
		}else if(ch2==2){
	    	result=mtocm(num);
	    	print(num,result,arr[2],arr[1]);
		}else if(ch2==3){
	    	result=mtokm(num);
	    	print(num,result,arr[2],arr[3]);
		}else if(ch2==4){
	    	result=mtoin(num);
	    	print(num,result,arr[2],arr[4]);
		}else if(ch2==5){
	    	result=mtoft(num);
	    	print(num,result,arr[2],arr[5]);
		}else if(ch2==6){
	    	result=mtoyard(num);
	    	print(num,result,arr[2],arr[6]);
		}else if(ch2==7){
	    	result=mtomiles(num);
	    	print(num,result,arr[2],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==4){
		lists(arr4);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	    cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=kmtomm(num);
	    	print(num,result,arr[3],arr[0]);
		}else if(ch2==2){
	    	result=kmtocm(num);
	    	print(num,result,arr[3],arr[1]);
		}else if(ch2==3){
	    	result=kmtom(num);
	    	print(num,result,arr[3],arr[2]);
		}else if(ch2==4){
	    	result=kmtoin(num);
	    	print(num,result,arr[3],arr[4]);
		}else if(ch2==5){
	    	result=kmtoft(num);
	    	print(num,result,arr[3],arr[5]);
		}else if(ch2==6){
	    	result=kmtoyard(num);
	    	print(num,result,arr[3],arr[6]);
		}else if(ch2==7){
	    	result=kmtomiles(num);
	    	print(num,result,arr[3],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==5){
		lists(arr5);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	     cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=intomm(num);
	    	print(num,result,arr[4],arr[0]);
		}else if(ch2==2){
	    	result=intocm(num);
	    	print(num,result,arr[4],arr[1]);
		}else if(ch2==3){
	    	result=intom(num);
	    	print(num,result,arr[4],arr[2]);
		}else if(ch2==4){
	    	result=intokm(num);
	    	print(num,result,arr[4],arr[3]);
		}else if(ch2==5){
	    	result=intoft(num);
	    	print(num,result,arr[4],arr[5]);
		}else if(ch2==6){
	    	result=intoyard(num);
	    	print(num,result,arr[4],arr[6]);
		}else if(ch2==7){
	    	result=intomiles(num);
	    	print(num,result,arr[4],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==6){
		lists(arr6);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	     cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=fttomm(num);
	    	print(num,result,arr[5],arr[0]);
		}else if(ch2==2){
	    	result=fttocm(num);
	    	print(num,result,arr[5],arr[1]);
		}else if(ch2==3){
	    	result=fttom(num);
	    	print(num,result,arr[5],arr[2]);
		}else if(ch2==4){
	    	result=fttokm(num);
	    	print(num,result,arr[5],arr[3]);
		}else if(ch2==5){
	    	result=fttoin(num);
	    	print(num,result,arr[5],arr[4]);
		}else if(ch2==6){
	    	result=fttoyard(num);
	    	print(num,result,arr[5],arr[6]);
		}else if(ch2==7){
	    	result=fttomiles(num);
	    	print(num,result,arr[5],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==7){
		lists(arr7);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	     cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=yardtomm(num);
	    	print(num,result,arr[6],arr[0]);
		}else if(ch2==2){
	    	result=yardtocm(num);
	    	print(num,result,arr[6],arr[1]);
		}else if(ch2==3){
	    	result=yardtom(num);
	    	print(num,result,arr[6],arr[2]);
		}else if(ch2==4){
	    	result=yardtokm(num);
	    	print(num,result,arr[6],arr[3]);
		}else if(ch2==5){
	    	result=yardtoin(num);
	    	print(num,result,arr[6],arr[4]);
		}else if(ch2==6){
	    	result=yardtoft(num);
	    	print(num,result,arr[6],arr[5]);
		}else if(ch2==7){
	    	result=yardtomiles(num);
	    	print(num,result,arr[6],arr[7]);
		}else{
			invalid();
		}
	}else if(ch1==8){
		lists(arr8);
		cout << "Please enter your choice : ";
	    cin >> ch2;
	     cout << "Please enter your length :";
	    cin >> num;
	    if(ch2==1){
	    	result=milestomm(num);
	    	print(num,result,arr[7],arr[0]);
		}else if(ch2==2){
	    	result=milestocm(num);
	    	print(num,result,arr[7],arr[1]);
		}else if(ch2==3){
	    	result=milestom(num);
	    	print(num,result,arr[7],arr[2]);
		}else if(ch2==4){
	    	result=milestokm(num);
	    	print(num,result,arr[7],arr[3]);
		}else if(ch2==5){
	    	result=milestoin(num);
	    	print(num,result,arr[7],arr[4]);
		}else if(ch2==6){
	    	result=milestoft(num);
	    	print(num,result,arr[7],arr[5]);
		}else if(ch2==7){
	    	result=milestoyard(num);
	    	print(num,result,arr[7],arr[6]);
		}else{
			invalid();
		}
	}else{
		invalid();
	}
	
}
}