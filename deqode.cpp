#include <iostream>
#include <string>
using namespace std;

int main(){
string s="a1b10c";
string ans="";
string p="";
int k=0;
for(int i=0;i<s.length();i++)
{
    /*if(s[i]=='1' or s[i]=='2' or s[i]=='3' or s[i]=='4'
    or s[i]=='5' or s[i]=='6' or s[i]=='7' or s[i]=='8'
    or s[i]=='9')*/
    if(s[i]=='0' or s[i]=='1' or s[i]=='2' or s[i]=='3' or s[i]=='4' or s[i]=='5' or s[i]=='6' or s[i]=='7' or s[i]=='8' or s[i]=='9')
    {
        p+=s[i];
    }
    else{
        if(p==""){ ans+=s[i];}
        else{
        k=stoi(p);
        for(int j=k;j>0;j--)
        {
            ans+=s[i];
        }
        p="";
        }
    }
}
cout<<ans;
return 0;
}