#include <iostream>
using namespace std;

class c1{
	private:
		int sec_inp;
	protected:
		int hh,mm,ss;
		void getter(int inp){
			sec_inp = inp;
		}
		void sol(){
			ss = sec_inp % 60;
			mm = sec_inp / 60;
			hh = mm / 60;
			mm = mm % 60;
		}
};
class c2: public c1{
	public:
		void fun(){
			int a;
			cout << "Enter time in seconds: ";
			cin >> a;
			getter(a);
			sol();
			cout << hh << ":" << mm << ":" << ss;
		}
};

int main(){
	c2 cl2;
	cl2.fun();
	return 0;
}
