#include <iostream>
using namespace std;

class StrCmp{
	public:
		char *str1;
		char *str2;
		int l1;
		int l2;
		
		StrCmp(string s1,string s2){
			l1 = s1.length();
			l2 = s2.length();
			str1 = new char(l1);
			str2 = new char(l2);
			for(int i=0;i<l1;i++){
				str1[i] = s1[i];
			}
			for(int i=0;i<l2;i++){
				str2[i] = s2[i];
			}
		}
		void cmpStr(){
			if(l1 != l2){
				cout << "Strings are not Equal.";
				return;
			}
			for(int i=0;i<l1;i++){
				if(*str1==*str2){
					str1++;
					str2++;
				}else{
					cout << "Strings are not Equal.";
					return;	
				}
			}
			cout << "Strings are Equal. ";
		}
};
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	StrCmp stcp(s1,s2);
	stcp.cmpStr();
}
