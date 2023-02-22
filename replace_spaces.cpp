//given a string str of word.you need to replace all the spaces between words with "@40"

#include<iostream>
using namespace std;

string replaceSpace(string &str)
{
    string temp;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            temp.push_back('@');
             temp.push_back('4');
             temp.push_back('0');
        }
        else 
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    string ans=replaceSpace(str);
    cout<<ans;
}