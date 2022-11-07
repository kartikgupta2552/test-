#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1,2,2,2,2};
        int s = 0;
        int e = a.size()-1;
        int m = s+(e-s)/2;
        while(s<e){
            if(a[m]>=a[0]){
                s = m+1;
            }
            else{
                e = m;
            }
            m = s+(e-s)/2;
        }
    cout<<s;
    return 0;
}