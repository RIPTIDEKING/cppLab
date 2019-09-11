#include <iostream>
using namespace std;
class c1{
	private:
		int len;
		int bre;
		void sol(){
			cout << "Area of given rectangle: "<<len*bre;
		}
		friend class c2;
};
class c2{
	public:
		void ff(c1 &a){
			cout << "Enter length: ";
			cin >> a.len;
			cout <<"Enter breath: ";
			cin >> a.bre;
			a.sol(); 
		}
};
int main(){
	c1 t;
	c2 c;
	c.ff(t);
}
