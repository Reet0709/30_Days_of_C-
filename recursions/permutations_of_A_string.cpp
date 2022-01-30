#include <iostream>
using namespace std;

void permut(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        string rest = s.substr(0,i) + s.substr(i+1);
        permut(rest, ans+ch);
    }
}

int main() {
permut("ABCD"," ");
	return 0;
}
