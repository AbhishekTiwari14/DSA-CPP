#include <bits/stdc++.h>
using namespace std;

//Q) sort array containing only 0s,1s&2s

void DNFA(vector<int> ar){
    int l=0,m=0,r=ar.size()-1;
    while(m<=r){
        if(ar[m] == 0) swap(ar[m++], ar[s++]);
        else if(ar[m] == 1) m++;
        else swap(ar[m], ar[r--]);
    }
}


int main(){
return 0;
}