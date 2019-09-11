#include <iostream>
using namespace std;

void fun(int x){
	if(x == 0){
		cout << "Even Number";
		return;
	}else if(x == 1){
		cout << "Odd Number";
		return;
	}
	fun(x-2);
}

int main(){
	int a;
	cout << "Enter a number: ";
	cin >> a;
	fun(a);
}

