#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int marks[5];
    float sum;
    float avg;
};
int main()
{
    Student s;
    cout << "Enter name : ";
    getline(cin, s.name);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject " << i + 1 << " : ";
        cin >> s.marks[i];
    }
    s.sum = 0;
    for (int i = 0; i < 5; i++)
    {
        s.sum += s.marks[i];
    }
    s.avg = s.sum / 5;
    cout << "Name : " << s.name << endl;
    cout << "Sum : " << s.sum << endl;
    cout << "Average : " << s.avg << endl;
    return 0;
}