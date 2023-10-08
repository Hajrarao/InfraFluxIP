#include <iostream>
#include <cmath>
using namespace std;
class calculator
{
private:
    string z;
    int num, i;
    double addition = 0.0, subtraction = 0.0, multiplication = 1.0, division = 0, square, sqrot;

public:
    void add()
    {
        cout << "How many numbers you want to add : ";
        cin >> num;
        double n[num];
        cout << "Please enter the number one by one : " << endl;
        for (i = 0; i < num; i++)
        {
            cin >> n[i];
        }
        for (i = 0; i < num; i++)
        {
            addition = addition + n[i];
        }
        cout << "Sum of the numbers is = " << addition << endl;
        cout << "---------------------------------" << endl;
    }
    void sub()
    {
        cout << "How many numbers you want to subtract : ";
        cin >> num;
        double n[num];
        cout << "Please enter the number one by one : " << endl;
        for (i = 0; i < num; i++)
        {
            cin >> n[i];
        }
        for (i = 0; i < num; i++)
        {
            subtraction = subtraction - n[i];
        }
        cout << "Difference of the numbers is = " << subtraction << endl;
        cout << "---------------------------------------" << endl;
    }
    void mult()
    {
        cout << "How many numbers you want to multiply : ";
        cin >> num;
        double n[num];
        cout << "Please enter the number one by one : " << endl;
        for (i = 0; i < num; i++)
        {
            cin >> n[i];
        }
        for (i = 0; i < num; i++)
        {
            multiplication = multiplication * n[i];
        }
        cout << "Product of the numbers is = " << multiplication << endl;
        cout << "-------------------------------------" << endl;
    }
    void div()
    {
        cout << "How many numbers you want to divide : ";
        cin >> num;
        double n[num];
        cout << "Please enter the number one by one : " << endl;
        for (i = 0; i < num; i++)
        {
            cin >> n[i];
        }
        try
        {
            for (i = 0; i < num; i++)
            {
                if (n[i + 1] == 0)
                {
                    throw z;
                }
            }
            division = n[i] / n[i + 1];
            for (i = 0; i < num - 2; i++)
            {
                division = division / n[i + 2];
            }
            cout << "Division of the numbers is = " << division << endl;
            cout << "-------------------------------------" << endl;
        }
        catch (string e)
        {
            cout << "Can't divide by zero ! " << endl;
        }
    }
    void sq()
    {
        double n;
        cout << "Enter the number to find the Square : ";
        cin >> n;
        square = n * n;
        cout << "Square of the given number is : " << square << endl;
        cout << "------------------------------------" << endl;
    }
    void sqroot()
    {
        double n;
        cout << "Enter the number to find the SquareRoot : ";
        cin >> n;
        sqrot = sqrt(n);
        cout << "SquareRoot of the given number is : " << sqrot << endl;
        cout << "-----------------------------------------" << endl;
    }
};
int main()
{
    int option;
    calculator c;
    while (1)
    {
        cout << "Select any option from the C++ Calculator :" << endl;
        cout << "1 = ADDITION \n2 = SUBTRACTION \n3 = MULTIPLICATION \n4 = DIVISION \n5 = SQUARE \n6 = SQUAREROOT \n7 = EXIT \n " << endl;
        ;
        cout << "Make a choice : ";
        cin >> option;
        if (option < 1 || option > 7)
        {
            cout << " Enter valid input ! " << endl;
            continue;
        }
        else
        {
            switch (option)
            {
            case 1:
                c.add();
                break;
            case 2:
                c.sub();
                break;
            case 3:
                c.mult();
                break;
            case 4:
                c.div();
                break;
            case 5:
                c.sq();
                break;
            case 6:
                c.sqroot();
                break;
            case 7:
                exit(0);
            }
        }
    }
}