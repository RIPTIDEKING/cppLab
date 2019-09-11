#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int freq1,freq2;
	char alpha;
	bool check_anagram = true;
	string str1,str2;
	cout << "Enter string 1: ";
	cin >> str1;
	cout << "Enter string 2: ";
	cin >> str2;
	for(int i = 0;i<26;i++){
		alpha = 'a'+i;
		freq1 = count(str1.begin(),str1.end(),alpha);
		freq2 = count(str2.begin(),str2.end(),alpha);
		if(freq1 != freq2){
			check_anagram = false;
			break;
		}
	}
	if(check_anagram){
		cout << "They are anagrams";
	}else{
		cout << "They are not anagrams";
	}
}
