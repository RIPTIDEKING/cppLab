#include <iostream>
using namespace std;
class c{
	int mScience;
	int mMaths;
	public:
		c(int a,int b){
			mScience = a;
			mMaths = b;
		}
		c(c &a){
			mScience = a.mScience;
			mMaths = a.mMaths;
		}
		void show(){
				cout << "Marks of Science: "<<mScience<<endl;
				cout << "Marks of Maths: "<<mMaths<<endl;
		}
};
int main(){
	int m1,m2;
	cout << "Enter marks of Science: "<<endl;
	cin >> m1;
	cout << "Enter marks of Maths: "<<endl;
	cin >> m2;
	c i1(m1,m2);
	c i2(i1);
	i2.show();
}
