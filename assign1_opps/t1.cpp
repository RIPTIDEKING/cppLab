#include <bits/stdc++.h>
using namespace std;
int main(){
	vector ss;
	for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) 
            ss.push_back(s.substr(i, len)); 
}
