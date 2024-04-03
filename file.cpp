C++ code :
class Solution {
public:
    int minMaxDifference(int num) {
   string s1=to_string(num);
string s2=s1;

char mini=s2[0];
char t='a';
   for(int i=0;i<s1.size();i++)
{
    if(t!='a')
{
    if(t==s1[i])
    s1[i]='9';
}

else if(s1[i]!='9')
{
        t=s1[i];
    s1[i]='9';

}
 if(s2[i]==mini)
{
s2[i]='0';
}
   }
   return (stoi(s1)-stoi(s2));

    }
};
