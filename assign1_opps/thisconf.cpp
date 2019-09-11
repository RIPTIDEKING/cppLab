#include <iostream>
using namespace std;
class exam1{
	protected:
		int a = 20;
		funl(){
			cout<<"parent fun: " << a;
		}
};
class exam2:public exam1{
	public:
//		int a = 10;
		
		void set(int a){
			this->a = a;
		}
		
		void put(){
			cout << "a: " << a<<endl;
			cout <<"this.a: "<<this->a<<endl;
			cout << "parent scope: "<< exam1::a <<endl;
			funl();
		}
};
int main(){
	exam2 ex;
	ex.set(200);
	ex.put();
}
