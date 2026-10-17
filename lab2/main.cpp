#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float x, y, R, a, b;

    cout << "Введите значение x: ";
    cin >> x;

    if(x<=-2){
        y=-x-2;
    }
    else if(x<=0){
        y=pow(1-pow(x+1,2),0.5);
    }
    else if(x<=4){
        y=0-pow(4-pow(x-2,2),0.5);
    }
    else if(x<=6){
        y=0-0.5*x+2;
    }
    else{
        y=-1;
    }

    cout << "Значение y = " << y << endl;

    cout << "Введите значение R: ";
    cin >> R;

    cout << "Введите значение X и Y: ";
    cin >> a >> b;

    if(((pow(a+R,2)+pow(b+R,2))<=R*R) && (a<=b<=0)){
        cout << "Попадает";
    }
    else if(((pow(a+R,2)+pow(b+R,2))<=R*R) && (a>=b>=0)){
        cout << "Попадает";
    }
    else{
        cout << "Не попадает";
    }
    return 0;
}