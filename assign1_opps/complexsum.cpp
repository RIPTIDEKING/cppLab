#include <iostream>
using namespace std;
void csum(int re1,int im1,int re2,int im2){
	int re = re1+re2;
	int im = im1+im2;
	cout << re<<"+i"<<im<<endl;
}
int main(){
	int re1,re2,im1,im2;
	cout<<"Enter real part of first complex no.";
	cin >> re1;
	cout << "Enter imaginary part of first complex no.";
	cin >> im1;
	cout<<"Enter real part of second complex no.";
	cin >> re2;
	cout << "Enter imaginary part of second complex no.";
	cin >> im2;
	csum(re1,im1,re2,im2);
}
