#include <iostream>

using namespace std;

int main()
{
    int x=5, y=8, z=10;
    x=7;
    y*=x;
    z+=y;
    x*=3;
      x++;
      y++;
      z++;
    cout<<(x+y+z)/2 <<endl;
    cout<<x++ <<endl;
    cout<<y+x <<endl;
    cout<<z-- <<endl;
    cout<<x+z<<endl;
      int p=y++;
    cout<<p*3<<endl;
    cout<<p--<<endl;
    cout<<++z<<endl;
    cout<<p+y <<endl;
    return 0;
}

