#include <iostream>
using namespace std;

class inr{
	private:
		int n;
		int i;
	public:
		inr(){
			n=0;
			i=1; 
		}
		inr(int N,int I){
			n = N;
			i = I;
		}
		int operator++(){
			n = n+i;
			return n;
		}
		int operator++(int){
			n = n+i+1;
			return n;
		}
		void display(){
			cout << n<<endl;
		}
};
int main(){
	int n = 5;
	inr i(n,3);
	int r = ++i;
	cout << r <<endl;
	i.display();
	int l = i++;
	cout << l << endl;
	i.display();
}
