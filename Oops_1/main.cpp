#include <iostream>

using namespace std;


class Human
{
public:
    string name;
    void introduce();
};

void Human :: introduce()
{
    cout << name << endl;
}

int main()
{
    Human abc;
    abc.name = "umar";
    abc.introduce();
    return 0;
}
