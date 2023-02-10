#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
 {string s="kjsseseeljes";
int freq[20];
for (int i = 0; i < 20; i++)
{
    freq[i] = 0;
}
for (int i = 0; i < s.size(); i++)
{
freq[s[i]-'a']++;
}
char ans = 'a';
int maxF=   0;
for (int i = 0; i < 20 ; i++)
{
    if (freq[i] >  maxF)
    {
        maxF=freq[i];
        ans=i+'a';

    }
    
}
cout<<ans<<" "<<maxF<<endl;
return 0;
}