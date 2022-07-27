#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
    int area;
    int perimeter;

public:
    void accept_length()
    {
        cout << "Enter length : ";
        cin >> length;
    }
    void accept_breadth()
    {
        cout << "Enter breadth : ";
        cin >> breadth;
    }
    void calculate_area()
    {
        area = length * breadth;
    }
    void calculate_perimeter()
    {
        perimeter = 2 * (length + breadth);
    }
    void print()
    {
        cout << "Area : " << area << endl;
        cout << "Perimeter : " << perimeter << endl;
    }
};
int main()
{
    Rectangle r;
    r.accept_length();
    r.accept_breadth();
    r.calculate_area();
    r.calculate_perimeter();
    r.print();
    return 0;
}