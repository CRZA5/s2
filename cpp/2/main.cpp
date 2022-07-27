#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void accept_name()
    {
        cout << "Enter name : ";
        getline(cin, name);
    }
    void accept_age()
    {
        cout << "Enter age : ";
        cin >> age;
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
int main()
{
    Person p;
    p.accept_name();
    p.accept_age();
    p.print();
    return 0;
}