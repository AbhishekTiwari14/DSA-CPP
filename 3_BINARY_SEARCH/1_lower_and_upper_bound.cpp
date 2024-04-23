#include <bits/stdc++.h>
using namespace std;

//Inbuilt lower bound method: lower_bound(arr.begin(), arr.end(), target)

int main(){

vector<int> v = {1,4,5,6,8};
cout<< lower_bound(v.begin(), v.end(), 10) - v.begin(); //2, ie, index of 5
cout<< upper_bound(v.begin(), v.end(), 5) - v.begin(); //3, ie, index of 6
return 0;
}