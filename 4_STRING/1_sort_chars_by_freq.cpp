#include <bits/stdc++.h>
using namespace std;

//M-1: unordered_map<char,freq> -> vector<pair<freq,char>> -> sort wrt freq. TC: O(NlogN) SC: O(N)  
string frequencySort1(string s) {
    unordered_map<char, int> hashmap;
    for(auto c: s) hashmap[c]++;
    vector<pair<int, char>> freq_arr;
    for(auto [c,f] : hashmap) freq_arr.push_back({f,c});
    sort(freq_arr.begin(), freq_arr.end(), [](const pair<int, char> &a, const pair<int, char> &b){
        if(a.first != b.first) return a.first>b.first;
        return b.second>a.second; //preserves relative order of chars with same freq.
    });
    string ans = "";
    for(auto [f,c]: freq_arr) ans.append(f, c);
    return ans;
}

//M-2(better)(does not preserve relative order): Bucket Sort: hashmap<char, freq> -> vector<string> where index of vector => freq, and string = collection of all chars. with that freq. TC: O(N), SC: O(N) 
string freqSort2(string s){
    unordered_map<char, int> hashmap;
    for(auto c: s) hashmap[c]++;
    vector<string> freq_arr(s.size() + 1); 
    for (auto [ch, freq] : hashmap) {
        freq_arr[freq].append(freq, ch); // Efficiently append single character
    }
    string ans = "";
    for(int i=s.size(); i>=1; i--){
        if(!freq_arr[i].empty()) ans.append(freq_arr[i]);
    }
    return ans;
}

int main(){

string s = "aabcckkkkkkjp";
cout<<freqSort2(s);

return 0;
}