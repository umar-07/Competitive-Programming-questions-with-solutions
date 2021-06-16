#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a;
        cin >> a;
        if((a=='b')||(a=='B'))
            cout << "BattleShip" << endl;
        if((a=='c')||(a=='C'))
            cout << "Cruiser" << endl;
        if((a=='d')||(a=='D'))
            cout << "Destroyer" << endl;
        if((a=='f')||(a=='F'))
            cout << "Frigate" << endl;
    }
    return 0;
}
