#include <iostream>
using namespace std;

class Str{
	public:
		string s;
		Str(string str){
			s=str;
		}
		Str operator+ (Str &s2){
			Str res;
			res.s = s+s2.s;
			return res;
		}
	};
int main(){
	Str s1("Hello");
	
}
/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

void fun(vector<long long> N,vector<long long> M){
    vector<long long> res(N.size(),-1);
    // for(int i=0;i<M.size();i++){
    //     for(int j=0;j<N.size();j++){
    //         if((j+1)%(i+1)==0){
    //           if(N[j]==0){
    //               continue;
    //           }
    //             if(N[j]<=M[i]){
    //                 N[j]=0;
    //                 res[j]= i+1;
    //              //   cout << "i "<<i+1<<endl;
    //               //  cout << "j "<<j+1<<endl;
    //             }
    //         }
    //     }
    // }
    int flag = 0;
    for(int i=0;i<N.size();i++){
        flag = 0;
        for(int j=0;j<M.size();j++){
            if((i+1)%(j+1)==0){
                if(N[i]<=M[j]){
                    printf("%d",j+1);
                  //  cout<<j+1<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
           printf("%d",-1);
            cout << -1 <<endl;
        }
    }
    // for(int i=0;i<res.size();i++){
    //     printf("%d \n",res[i]);
    //     //cout << res[i]<<endl;
    // }
    
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
int s,n,m;
vector<long long> N;
vector<long long> M;
long long temp;
//scanf("%d",&s);
cin >> s;
for(int l=0;l<s;l++){
    N.clear();
    M.clear();
   // scanf("%d %d",&n,&m);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        //scanf("%lld",&temp);
        cin >> temp;
        N.push_back(temp);
    }
    for(int i=0;i<m;i++){
        //scanf("%lld",&temp);
        cin >> temp;
        M.push_back(temp);
    }
    fun(N,M);
}
}

