#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    string designation;
    float salary;
    float hra;
    float da;
    float basic_pay;
    float gross_pay;

public:
    void accept_id()
    {
        cout << "Enter ID : ";
        cin >> id;
    }
    void accept_name()
    {
        cout << "Enter name : ";
        cin.sync();
        getline(cin, name);
    }
    void accept_designation()
    {
        cout << "Enter designation : ";
        cin.sync();
        getline(cin, designation);
    }
    void accept_hra()
    {
        cout << "Enter HRA : ";
        cin >> hra;
    }
    void accept_da()
    {
        cout << "Enter DA : ";
        cin >> da;
    }
    void accept_basic_pay()
    {
        cout << "Enter basic pay : ";
        cin >> basic_pay;
    }
    void calculate_gross_pay()
    {
        gross_pay = hra + da + basic_pay;
    }
    void print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Designation : " << designation << endl;
        cout << "HRA : " << hra << endl;
        cout << "DA : " << da << endl;
        cout << "Basic Pay : " << basic_pay << endl;
        cout << "Gross Pay : " << gross_pay << endl;
    }
};
int main()
{
    Employee e;
    e.accept_id();
    e.accept_name();
    e.accept_designation();
    e.accept_hra();
    e.accept_da();
    e.accept_basic_pay();
    e.calculate_gross_pay();
    e.print();
    return 0;
}