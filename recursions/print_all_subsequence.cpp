#include <iostream>
using namespace std;

void substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch =s[0];
    string rest = s.substr(1); 
    
    substring(rest,ans);
    substring(rest,ans+ch);
}

int main() {
	substring("ABC","");
	return 0;
}
