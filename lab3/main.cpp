#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Задание №1
    
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

    // Задание №2

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

    // Залание №3
    float nx,kx,eps;

    cout << "Введите начало интервала: "; cin >> nx;
    cout << "Введите конец интервала: "; cin >> kx;
    cout << "Введите шаг интервала: "; cin >> dx;
    cout << "Введите значение точности: "; cin >> eps;

    cout << "   X   | ln(x) |   n   " << endl;

    x = nx;

    while(x<=kx){
        if((x<=0)or(x>2)){
            cout << "X вне области сходимости";
            x += dx;
            continue;
        }

        double t = x - 1;
        int N = 0 ;
        double a = t;
        float S = a;
        int c = 1;

        bool B = false;
        int i = 0;
        while(i<1000){
            double k = -t*(N+1)/(N+2);
            a*=k;
            N++;

            if (fabs(a)<eps){
                B = true;
                break;
            }

            S+=a;
            c++;
            i++;
        }
        if(!B){
            cout << x << "  ряд не сошёлся  " << c << endl;
        }
        else{
            cout << x << "  " << (float(int(S*1000000))/1000000) << "  " << c << endl;
        }

        x+= dx;
    }

    return 0;
}