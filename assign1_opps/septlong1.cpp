#include <bits/stdc++.h>
using namespace std;

vector<long long> fibbo(long long n){
	vector<long long> ret;
	long long temp =0;
	ret.push_back(0);
	if(n==1) return ret;
	ret.push_back(1);
	if(n==2) return ret;
	for(int i=2;i<n;i++){
		temp = ret[i-1]+ret[i-2];
		ret.push_back(temp);
	}
	return ret;
}
long long easyFibbo(vector<long long> fibbo){
	if(fibbo.size()==1){
		return fibbo[0];
	}
	vector<long long> ret;
	long long temp;
	for(int i =1;i<fibbo.size();i += 2){
		temp = fibbo[i]%10;
		ret.push_back(temp);
	}
	return easyFibbo(ret);
}
int main(){
	int n=1;
	long long r,t=10000000000;
//	scanf("%d",&n);
	for(int i=0;i<n;i++){
//		scanf("%lld",&t);
		r = easyFibbo(fibbo(t));
		printf("%lld \n",r);
	}
	
}
