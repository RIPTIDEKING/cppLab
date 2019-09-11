#include <bits/stdc++.h>
using namespace std;
string isValid(string str){
	string retval = "YES";
	int spe_ch = 0, freq1=0,freq2=0;
	int a[26] = {0};
	char alpha;
	for(int i =0;i<26;i++){
		alpha = 'a'+i;
		a[i] = count(str.begin(),str.end(),alpha);
	}
	int cc=0;
	sort(a,a+26);
	for(int i=0;i<26;i++){
		if(a[i]==1){
			cc++;
		}
	}
	int i_ch = 0;
	if(cc>1){
		i_ch = 1;
	}else{
	}
	for(int i =0;i<25;i++){
		freq1 = a[i];
		freq2 = a[i+1];
		cout << a[i]<< endl;
		if(a[i]==0){
		}else if(freq1==freq2){
		}else if(freq1==1&&spe_ch==0&&i_ch==0){
			retval = "YES";
			spe_ch = 1;
			cout << "c2 " << endl;
		}else if(freq2-freq1==1&&spe_ch==0&&i==24){
			retval = "YES";
			spe_ch = 1;
			cout << "c3 " << endl;
		}else{
			return "NO";
		}
	}
	return retval;
}
int main(){
	string s;
	cin >> s;
	cout << isValid(s);
}
