#include <bits/stdc++.h>
using namespace std;
void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << "\t" << g.front(); 
        g.pop(); 
    } 
    cout << "\n"; 
} 
queue<int> rotateQueue(queue<int> q,int r){
    queue<int> ret = q;
    int temp=0;
    for(int i=0;i<r;i++){
        temp = ret.front();
        cout << "fun q :";
        showq(ret);
        ret.push(temp);
        ret.pop();
        
    }
    return ret;
}
// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int> > matrix, int r,int m,int n) {
vector<vector<int> >mat = matrix;
queue<int> layer;
int minsiz = min(m, n);
for(int k=0;k<minsiz/2;k++){
    for(int j=0+k;j<n-k;j++){
        layer.push(mat[k][j]);
    }
    for(int i=1+k;i<m-k;i++){
        layer.push(mat[i][n-k-1]);
    }
    for(int j=n-2-k;j>=k;j--){
        layer.push(mat[m-1-k][j]);
    }
    for(int i=m-2-k;i>k;i--){
        layer.push(mat[i][k]);
    }
	
	cout << "main q w:";
    showq(layer);
    
    layer = rotateQueue(layer,r);
    cout << "main q r:";
    showq(layer);
    
    for(int j=0+k;j<n-k;j++){
        mat[k][j] = layer.front();
        layer.pop();
    }
    for(int i=1+k;i<m-k;i++){
        mat[i][n-k-1] = layer.front();
        layer.pop();
    }
    for(int j=n-2-k;j>=k;j--){
        mat[m-1-k][j] = layer.front();
        layer.pop();
    }
    for(int i=m-2-k;i>k;i--){
        mat[i][k] = layer.front();
        layer.pop();
    }

}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout << mat[i][j]<<" ";
    }
    cout << endl;
}
}
int main(){
	vector<vector<int> > inp(4);
	string s = "abcdefgh";
cout <<	s.substr(2,3);
	for(int i=0;i<4;i++){
		inp[i] = vector<int>(4);
		for(int j=0;j<4;j++){
			cin >> inp[i][j];
		}
	}
	matrixRotation(inp,1,4,4);
}
