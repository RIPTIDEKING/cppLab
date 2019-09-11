#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = {};
	cout << "enter 10 digits to be sorted" << endl;
	for(int i = 0;i<10;i++){
		cin >> a[i];
	}
	sort(a,a+10);
	cout << "Increasing order: ";
	for(int i = 0;i<10;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a,a+10,greater<int>());
	cout << "Decreasing order: ";
	for(int i = 0;i<10;i++){
		cout << a[i] << " ";
	}
	return 0;
}
