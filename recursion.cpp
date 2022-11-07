#include<iostream>
using namespace std;
int main(){
    int n = 1;
    int s = 1;
    int e = n/2;
    int m = (s+e)/2;
    int c =1;
    while(s<e){
        if(n==m*m){
            break;
        }
        if(n<(m*m)){
            // cout<<c;
            // c++;
            e = m-1 ;
        }      
        else if(n>(m*m)){
            // cout<<c;
            // c++;
            s = m+1;
        }
        m = (s+e)/2;
    }
    cout<<endl;
    cout<<m;
}