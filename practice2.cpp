#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
    int c =0;
    int p = s;
    for(int i=p+1;i<=e;i++){
        if(a[i]<a[p])
            c++;
    }
    int pindex = s+c;
    // swap(a[p],a[pindex]);
    int temp = a[p];
    a[p] = a[pindex];
    a[pindex] = temp;
    int i = s;
    int j = e;
    while(i<pindex && j>pindex)
    {
        while(a[i]<a[pindex])
            i++;
        while(a[j]>a[pindex])
            j--;
        if(i<pindex && j>pindex)
        {
            // swap(a[i++],a[j--]);
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++,j--;
        }
    }
    return pindex;
}

void quick(int a[],int s,int e){
    if(s>=e)
        return ;
    int p = partition(a,s,e);
    // cout<<p<<" ";
    quick(a,s,p-1);
    quick(a,p+1,e);
}

int main() {
    int a[5] = {5,6,3,4,2};
    int n = 5;
    quick(a,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}