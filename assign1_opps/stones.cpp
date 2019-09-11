#include <bits/stdc++.h>
using namespace std;

vector<int> stones(int n, int a, int b) {
int siz = pow(2,n);
int a1=0,count1=0,count2=0;
vector<int> cal(siz);
vector<int> ret;
for(int i=1;i<=n-1;){
    a1 = siz/(pow(2,i));
    for(int j=0;j<a1;j++){
        if(count1 == 0){
            cal[count2] += a;
  			count2++;
            
        }else if(count1 ==1){
            cal[count2] += b;
  		    count2++;
    	 }
    }
    if(count1 == 0){
    	count1 =1;
	}else{
		count1 =0;
	}

    if(count2 < siz){
        continue;
    }
    i++;
    count1 = 0;
    count2 = 0;
}
set<int> temp;
set<int> ::iterator temp1;
for(int i=0;i<siz;i++){
temp.insert(cal[i]);
}
for(temp1 = temp.begin();temp1 != temp.end();temp1++){
ret.push_back(*temp1);
}
return ret;
}
int main(){
	int n,a,b;
	cin >> n >> a >> b;
	vector<int> temp = stones(n,a,b);
	for(int i=0;i<temp.size();i++){
	cout << temp[i] << endl;
}
}
