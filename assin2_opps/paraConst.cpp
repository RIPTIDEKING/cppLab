#include <iostream>
using namespace std;
class c1{
	int mEnglish;
	int mScience;
	
	public:
		
		c1(int a,int b){
			mEnglish = a;
			mScience = b;
		}
	
	
		void show(){
			cout << "Marks of English: "<<mEnglish<<endl;
			cout << "Marks of Science: "<<mScience<<endl;
		}
};
int main(){
	int m1,m2;
	cout << "Enter marks of English: "<<endl;
	cin >> m1;
	cout << "Enter marks of Science: "<<endl;
	cin >> m2;
	c1 c(m1,m2);
	c.show();
}
