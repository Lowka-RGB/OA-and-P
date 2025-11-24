#include <bits/stdc++.h>
using namespace std;

int main() 
{
int a,b,c,d;
cout << "Введите двузначное число:" <<endl;
cin >> a;
b=a%10;
c=a/10;
d=b+c;
(d%3==0)?cout << "Сумма двузначных чисел кратно 3."<<endl;
cout << "Сумма двузначных чисел не кратно 3."<<endl;
return 0;
}
