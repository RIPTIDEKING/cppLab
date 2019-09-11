#include <iostream>
using namespace std;

class c1{
	static int count;
	
	public:	
		void confirm_obj(){
			++count;	
		}
		void disp(){
			cout << "No. of object created: " <<count;
		}
};
int c1::count;
int main(){
	c1 a,b,c;
	a.confirm_obj();
	b.confirm_obj();
	c.confirm_obj();
	a.disp();
}
