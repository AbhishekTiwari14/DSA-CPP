#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
        //for odd length palindromes
        string ans = "";
        ans.push_back(s[0]);
        for(int i=1; i<s.size()-1; i++){
            int j=i-1, k=i+1;
            int len = 1;
            while(j>=0 && k<=s.size()-1 && s[j] == s[k]){
                j--;
                k++;
                len+= 2;
            }
            if(ans.size() < len) ans = s.substr(j+1, k-j-1);
        }

        //for even length palindromes
        for(int i=0; i<s.size(); i++){
            int j=i, k=i+1;
            int len = 0;
            while(j>=0 && k<s.size() && s[j] == s[k]){
                j--;
                k++;
                len+= 2;
            }
            if(ans.size() < len) ans = s.substr(j+1, k-j-1);
        }
        return ans;
    }

int main(){
return 0;
}