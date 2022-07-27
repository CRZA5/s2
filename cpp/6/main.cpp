#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class String
{
private:
    string str;
    int len;
    string rev;

public:
    void init(string s)
    {
        len = s.length();
        str = s;
        rev = s;
        reverse(rev.begin(), rev.end());
    }
    void print()
    {
        cout << "String :" << str << endl;
        cout << "Length : " << len << endl;
        cout << "Reverse : " << rev << endl;
    }
};
int main()
{
    String s;
    string str;
    cout << "Enter string : ";
    getline(cin, str);
    s.init(str);
    s.print();
    return 0;
}