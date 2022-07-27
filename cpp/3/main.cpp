#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string reg_no;
    string name;
    string programme;
    string department;
    string college;
    float percentage;

public:
    void accept_reg_no()
    {
        cout << "Enter Register No : ";
        cin >> reg_no;
    }
    void accept_name()
    {
        cout << "Enter name : ";
        cin.sync();
        getline(cin, name);
    }
    void accept_programme()
    {
        cout << "Enter programme : ";
        cin.sync();
        getline(cin, programme);
    }
    void accept_department()
    {
        cout << "Enter department : ";
        cin.sync();
        getline(cin, department);
    }
    void accept_college()
    {
        cout << "Enter college : ";
        cin.sync();
        getline(cin, college);
    }
    void accept_percentage()
    {
        cout << "Enter percentage : ";
        cin >> percentage;
    }
    void print()
    {
        cout << "Register Number : " << reg_no << endl;
        cout << "Name : " << name << endl;
        cout << "Programme : " << programme << endl;
        cout << "Department : " << department << endl;
        cout << "College : " << college << endl;
        cout << "Percentage : " << percentage << endl;
    }
};
int main()
{
    Student s;
    s.accept_reg_no();
    s.accept_name();
    s.accept_programme();
    s.accept_department();
    s.accept_college();
    s.accept_percentage();
    s.print();
    return 0;
}