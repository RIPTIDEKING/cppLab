#include <iostream>
using namespace std;

class c1{
	private:
		int len;
		int bre;
		int setData(){
			cout << "Enter length: ";
			cin >> len;
			cout <<"Enter breath: ";
			cin >> bre; 
		}
		int res(){
			return len*bre;
		}
		
	friend void calArea(c1 &c);
};

void calArea(c1 &c){
	c.setData();
	cout << "Area of given rectangle: "<<c.res();
}
int main(){
	c1 a;
	calArea(a);
}
