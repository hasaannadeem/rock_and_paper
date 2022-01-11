#include <iostream>

using namespace std;

int main()
{
    int p,r,s;
    char p1,p2;
    cout<< "rock:r paper:p scissor:s";
    cout<<endl;
    cout<< "1st player choose a symbol:";
    cin>> p1;
    cout<<"2nd player choose a symbol:";
    cin>> p2;
    if (p1==p2)
    {
        cout << "try again";
    }
    else if ((p1=='p' && p2=='r')||(p1=='r' &&p2=='s')||(p1=='s' &&p2=='p'))
    {
        cout<<"player one is win";
    }

    else if( (p2=='p'&&p1=='r')||(p2=='r'&&p1=='s')||(p2=='s'&&p1=='p'))
    {
        cout<< "player two is win";
    }

    return 0;
}
