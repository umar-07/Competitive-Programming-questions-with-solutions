#include <iostream>

using namespace std;

void print()
{
    cout << "1 1" << endl << "8 8" <<  endl << "7 7" <<  endl << "6 8" <<  endl << "1 3" << endl;
    cout << "2 4" <<  endl << "1 5" <<  endl << "4 8" <<  endl << "3 7" <<  endl << "2 8" << endl;
    cout << "1 7" << endl << "5 3" <<  endl << "8 6" <<  endl << "3 1" <<  endl << "4 2" << endl;
    cout << "5 1" <<  endl << "8 4" <<  endl << "7 3" <<  endl << "8 2" <<  endl << "7 1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int r, c;
        cin >> r >> c;
        if(r-c==0)
        {
            if(r!=1)
            {
                print();
            }
            else
            {
                cout << "2 2" << endl;
                print();
            }
        }
        else if(c>r)
        {
            if(c-r==2)
            {
                if(r!=1 && c!=3)
                {
                    cout << "1 3" << endl << "2 2" << endl;
                    print();
                }
                else
                {
                    cout << "2 2" << endl;
                    print();
                }
            }
            else if(c-r==4)
            {
                if(r!=1 && c!=5)
                {
                    cout << "1 5" << endl << "3 3" << endl;
                    print();
                }
                else
                {
                    cout << "3 3" << endl;
                    print();
                }
            }
            else if(c-r==6)
            {
                if(r==1 && c==7)
                {
                    cout << "4 4" << endl;
                    print();
                }
                else
                {
                    cout << "5 5" << endl;
                    print();
                }
            }
        }
        else
        {
            if(r-c==2)
            {
                if(r!=3 && c!=1)
                {
                    cout << "3 1" << endl << "2 2" << endl;
                    print();
                }
                else
                {
                    cout << "2 2" << endl;
                    print();
                }
            }
            else if(r-c==4)
            {
                if(r!=5 && c!=1)
                {
                    cout << "5 1" << endl << "3 3" << endl;
                    print();
                }
                else
                {
                    cout << "3 3" << endl;
                    print();
                }
            }
            else if(r-c==6)
            {
                if(r==7 && c==1)
                {
                    cout << "4 4" << endl;
                    print();
                }
                else
                {
                    cout << "5 5" << endl;
                    print();
                }
            }
        }
    }
    return 0;
}
