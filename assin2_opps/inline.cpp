#include <iostream>
using namespace std;

inline int max3(int a,int b,int c){
	return (a > b)? ((a > c) ? a:c) : ((b > c)?b:c);
}
int main(){
	int n1,n2,n3;
	cout << "Enter 3 no to find out max no.: "<<endl;
	cin >> n1 >> n2 >> n3;
	cout <<"Max of 3 no is " <<max3(n1,n2,n3);
}
