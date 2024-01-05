#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s,f;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=tolower(s[i]);
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
                f+='.';
                f+=s[i];
            }
        }
        else{
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
                f+='.';
                f+=s[i];
            }
            
        }
    }
    cout << f << endl;
    return 0;
}
