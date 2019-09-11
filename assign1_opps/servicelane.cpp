#include <bits/stdc++.h>
using namespace std;

void serviceLane(int n, vector<vector<int> > cases, vector<int> width) {
//vector<int> r;
int minval;
//for(int i=0;i<n;i++){
//    cout << cases[i][0]<<endl;
//}
for(int i=0;i<n;i++){
    minval = width[cases[i][0]];
   // cout << minval <<" minval";
    for(int j=cases[i][0];j<=cases[i][1];j++){
        if(width[j]<minval){
            minval = width[j];
        }
    }
    cout << minval << endl;
  //  r.push_back(minval);
}
//return r;
}

int main(){
	int asize,n,temp;
	cin >> asize >> n;
	vector<int> sizes;
	for(int i=0;i<asize;i++){
		cin >> temp;
		sizes.push_back(temp);
	}
	
	vector<vector<int> > indices(n);
	
	for(int i=0;i<n;i++){
	indices[i] = vector<int>(2);
		for(int j=0;j<2;j++){
			cin >> temp;
			indices[i][j] = temp;
		}
	}
//	cout << "o1";
serviceLane(n,indices,sizes);
//	cout << "o2";
//	for(int i=0;i<result.size();i++){
//		cout << result[i] <<endl;
//	}
}
