#include <iostream>
using namespace std;

string revomedup(string s){
    if(s.length()==0){
        return "";
    }
    
    char ch = s[0];
    string ans = revomedup(s.substr(1));
    
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main() {
	cout<<revomedup("fffhwfhiuhuhwhhwgfdsyjow");
	return 0;
}
