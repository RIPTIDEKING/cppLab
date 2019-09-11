#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int freq;
	string input;
	char alphabet;
	cout << "Input String: ";
	cin >> input;
	
	for(int i = 0;i<26;i++){
		alphabet = 'a'+i;
		freq = count(input.begin(),input.end(),alphabet);
		if(freq >0){
		cout << " " << alphabet << ": ";
		cout << freq << endl;	
		}
	} 
}
