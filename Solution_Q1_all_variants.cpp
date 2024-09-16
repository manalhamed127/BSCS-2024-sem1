//Solutions of all the sections
#include <iostream>
using namespace std;

//Solution of CS-1E
int main()
{
    int n, u, t, h;
    cout << "Enter a three digit +ve intger. You can start the number with 0: ";
    cin >> n;
//smallest 3-digit may starts with 0 having distinct digits and exactly one (0 or 1) is 023
//largest 3-digit may ends with 1 having distinct digits and exactly one (0 or 1) is 981
//don't worry about the range check of (n<100 || n>999) which is the actual check for 3-digit +ve integers. so both are true.
    if (n < 23 || n > 981)
    {
        cout << "Invalid input\n";
        return 0;
    }
    u = n % 10;
    h = n / 100;
    t = (n / 10) % 10;
    if (u == 0 || t == 0 || h == 0)
    {
        if (u != 0 && t != 0)
            cout << "Sum: " << u + t << endl;
        else if (u != 0 && h != 0)
            cout << "Sum: " << u + h << endl;
        else
            cout << "Sum: " << t + h << endl;
    }
    else
    {
        if (u != 1 && t != 1)
        {
            if (u > t)
                cout << "Difference: " << u - t << endl;
            else
                cout << "Difference: " << t - u << endl;
        }
        else if (u != 1 && h != 1)
        {
            if (u > h)
                cout << "Difference: " << u - h << endl;
            else
                cout << "Difference: " << h - u << endl;
        }
        else
        {
            if (t > h)
                cout << "Difference: " << t - h << endl;
            else
                cout << "Difference: " << h - t << endl;
        }
    }
    return 0;
}

//Solution of CS-1B
int main()
{
    int n, u, t, h;
    cout << "Enter a three digit binary number: ";
    cin >> n;
    u = n % 10;
    h = n / 100;
    t = (n / 10) % 10;

    int r = h * pow(2, 2) + t * pow(2, 1) + u * pow(2, 0);
    cout << "Square of the given number input in denary: " << r * r << endl;
    if (u == 0)
        cout << "Provided input is even\n";
}

//Solution of CS-1F
int main()
{
    int n, u, t, h;
    cout << "Enter a three digit binary number: ";
    cin >> n;
    u = n % 10;
    h = n / 100;
    t = (n / 10) % 10;

    int sum = (u == 0) + (t == 0) + (h == 0);
    if (sum % 2 == 0)
        cout << "The system is safe\n";
    else
        cout << "The system is affected by melware\n";
}