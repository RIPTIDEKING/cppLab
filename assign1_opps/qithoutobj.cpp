#include <iostream>
using namespace std;

class c1{
	public:
		static int sq_len;
		static void sol(){
			cout << "arear of given ract: "<< sq_len*sq_len;
		}
		
};

int c1::sq_len;
int main(){
	cin >> c1::sq_len;
	c1::sol();
}
