// DK09
#include <cctype>
#include <cmath>
#include <cstring>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <utility>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <climits>


using namespace std;
vector<string>v;

void gen(string &s, int open, int close){
    if (open == 0 && close == 0){
        v.push_back(s);
        return;
    }
    if(open > 0){
        s.push_back('(');
        gen(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            gen(s,open,close-1);
            s.pop_back(); 
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        string s;
        int n;
        cin>>n;
        gen(s,n,n);
        for(auto it:v){
            cout<<it<<endl;
        }
    return 0;
}



