#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int s,i,p,count;
	cin >> n;
	for(int j=0;j<n;j++){
		cin>>s>>i>>p;
		count =0;
		s = s+p;
		if(p==0&&s>i){
			count++;
		}
		while(s>i){
			if(p<=0){
				break;
			}
				count++;
				s--;
				i++;
				p--;
		}
		cout << count;
		
	}
}
