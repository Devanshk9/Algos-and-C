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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //all_of(all should follow condition)
    vector<int>v = {1,2,3,4,7,8,90,91,100};
    cout<< all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;;
    //output=1(true) and using lambda is not compulsory you can use normal func too

    vector<int>v1 = {1,2,3,4,7,8,90,91,-100,-1002};
    cout<< all_of(v1.begin(),v1.end(),[](int x){return x>0;})<<endl;
    //output=0(false)


    //any_of(any one should follow condition)
    cout<< any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    //output=1(true) 

    cout<< any_of(v1.begin(),v1.end(),[](int x){return x>0;})<<endl;
    //output=1(true)


    //none_of(no-one should follow condition)
    cout<< none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    //output=0(false) as all are positive
    return 0;
}



