#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int strsearch(string s, char c){
    int ind = -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            ind = i;
            break;
        }
    }
    return ind;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    string arr[] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    while(t--){
        char c; cin >> c;
        string s; cin >> s;
        string str = "";
        int flag = 0;
        int k;
        if(c == 'R'){
            for(int i = 0; i < s.length(); i++){
                for(int j = 0; j < 3; j++){
                    k = strsearch(arr[j],s[i]);
                    if(k != -1){
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    str = str+s[k - 1];
                }
            }
        }
        else{
            for(int i = 0; i < s.length(); i++){
                for(int j = 0; j < 3; j++){
                    k = strsearch(arr[j],s[i]);
                    if(k != -1){
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    str = str+s[k + 1];
                }
            }
        }
    }
}
