#include <iostream>

using namespace std;

class Human
{
public:
    int age;
    Human(int age)
    {
        this->age=age;
    }
    void display()
    {
        cout << age << endl;
        cout << "1";
        cout << this->age << endl;
    }
};

int main()
{
    Human anil(27);
    anil.display();
    return 0;
}
