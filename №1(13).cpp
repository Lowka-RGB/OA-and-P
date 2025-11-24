#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
float a,b,c;
cout << "Введите значение a:" << endl;
cin >>a;
c=(pow(a,2)+pow(b,2))/(1-(pow(a,3)-b)/3);
cout << "c=" << setpresicion(4)<<c<<endl;
return 0;
}
