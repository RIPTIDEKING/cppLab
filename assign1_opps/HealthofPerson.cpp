#include <bits/stdc++.h>
using namespace std;
void fun(int m){
    int n = m-3,ret=0;
    for(int i=0;i<=n;i++){
        for(int j=n-i,k=0;j>=0;j--,k++){
            if(i==j&&i>k){
                continue;
            }
            if(j==k&&j>i){
                continue;
            }
            if(i==k&&i>j){
                continue;
            }
            ret++;
        }
    }
    printf("%d\n",ret);
}
int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int n,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        fun(t);
    }
}
