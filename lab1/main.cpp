#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float n, k, dx, y, x;

    cout << "Введите значение шага: ";
    cin >> dx;
    cout << "Введите начало цикла: ";
    cin >> n;
    cout << "Введите конец цикла: ";
    cin >> k;

    x = n;
    cout << " X    Y " << endl << "--------" << endl;
    while (x <= k)
    {
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

        cout << x << "    " << y << endl;
        x += dx;
    }


    return 0;
}
