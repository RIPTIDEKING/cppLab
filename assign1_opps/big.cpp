#include <bits/stdc++.h>
using namespace std;
int swapno(string str){
	if(str.length()==2){
		return 0;
	}
	for(int i=str.length()-1;i>0;i--){
		if()
	}
}
string biggerIsGreater(string w) {
string s = w;
char t;
int jth = 0;
int lastInd = s.length()-1,flag=0;
for(int i=0;i<s.length()-1;i++){
    if(s[i]>=s[i+1]){
        continue;
    }
    flag = 1;
  //  cout<<s[i]<<s[i+1]<<endl;
    break;
}
if(flag==0){
    return "no answer";
}
flag = 0;
for(int i = s.length()-2;i>=0;i--){
   if(s[lastInd]>s[i]){
       t = s[i];
       s[i] = s[lastInd];
       s[lastInd] = t;
       jth = i;
       flag = 1;
       break;
   }
}

if(flag == 0){
    for(int i = lastInd-1;i>0;i--){
        flag = 0;
        for(int j=i-1;j>=0;j--){
            if(s[j]<s[i]){
                t = s[j];
                s[j] = s[i];
                s[i] = t;
                flag = 1;
                jth = j;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    
}
partial_sort(s.begin()+1+jth, s.end(), s.end());
return s;
}
int main(){
	string s;
	int i =0;
	while(i!=1){
			cin >> s;
	if(s=="-1"){
		return 0;
	}
	s =	biggerIsGreater(s);
	cout << s<<endl;
	}

}

//
//bvulomthrfugqfbaknxginokekuemgb
//bvulomthrfugqfbbaeeggikkkmnnoux
//bvulomthrfugqfbaknxginokekugbem
