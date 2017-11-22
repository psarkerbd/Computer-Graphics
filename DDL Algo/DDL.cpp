#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0)

const int high = 100;

double m=0.0;
double x1 , y1 , x2 , y2;
bool flx=false , fly = false;

void lessthanOne()
{

    double newX , newY;

    if(flx==true && fly==true)
    {
        newX = x1 - 1.0;
        newY = y1 - m;
    }

    else if(flx==true && fly==false)
    {
        newX = x1 - 1.0;
        newY = y1 + m;
    }

    else if(flx==false && fly==true)
    {
        newX = x1 + 1.0;
        newY = y1 - m;
    }

    else
    {
        newX = x1 + 1.0;
        newY = y1 + m;
    }

    x1 = newX;
    y1 = newY;

    newY = round(newY);

    if(flx == true && fly == true)
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }

    else
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }
}

void greaterthanOne()
{
    double newX , newY;

    if(flx==true && fly==true)
    {
        newX = x1 - (1.0 / m);
        newY = y1 - 1.0;
    }

    else if(flx==true && fly==false)
    {
        newX = x1 - (1.0 / m);
        newY = y1 + 1.0;
    }

    else if(flx==false && fly==true)
    {
        newX = x1 + (1.0 / m);
        newY = y1 - 1.0;
    }

    else
    {
        newX = x1 + (1.0 / m);
        newY = y1 + 1.0;
    }

    x1 = newX;
    y1 = newY;

    newY = round(newY);

    if(flx == true && fly == true)
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }

    else
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }
}

void eualtoOne()
{

    double newX , newY;

    if(flx==true && fly==true)
    {
        newX = x1 - 1.0;
        newY = y1 - 1.0;
    }

    else if(flx==true && fly==false)
    {
        newX = x1 - 1.0;
        newY = y1 + 1.0;
    }

    else if(flx==false && fly==true)
    {
        newX = x1 + 1.0;
        newY = y1 - 1.0;
    }

    else
    {
        newX = x1 + 1.0;
        newY = y1 + 1.0;
    }

    x1 = newX;
    y1 = newY;

    newY = round(newY);

    if(flx == true && fly == true)
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }

    else
    {
        cout << "Xk+1 = " << newX << " Yk+1 = " << newY << "\n";
    }
}

int main()
{
    fast;

    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 > x2) flx = true;
    if(y1 > y2) fly = true;

    if(flx == true && fly == true)
    {
        m = (y1 - y2) / (x1 - x2);
    }

    else if(flx==true && fly == false)
    {
        m = (y2 - y1) / (x1 - x2);
    }

    else if(flx==false && fly == true)
    {
        m = (y1 - y2) / (x2 - x1);
    }

    else
    {
        m = (y2 - y1) / (x2 - x1);
    }

    //if(m < 0.0) m = (-1.0) * m;

    cout << "m = " << m << "\n";

    int tc = 0;

    while((x1 != x2) && (y1 != y2))
    {
        cout << ++tc << ". ";

        if(m < 1.0) lessthanOne();

        else if(m > 1.0) greaterthanOne();

        else eualtoOne();
    }

    return 0;
}
