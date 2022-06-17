#include <iostream>

using namespace std;

void Problem1() {
    cout << "Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user." << endl;
    int limit;
    int sum = 0;
    cout << "Please enter limit : ";
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        if (i%3==0||i%5==0)
        {
            sum += i;
        }
        
    }
    cout << "Sum : " << sum << endl << endl;
}

void Problem2() {
    cout << "Program that, given two positive integers, will calculate and print the greatest common divisor of the two." << endl;
    int num1,num2,max,result;
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    if (num1>num2)
    {
        max = num1;
    } else max= num2;
    
    for (int i = 1; i < max; i++)
    {
        if (num1%i==0&&num2%i==0)
        {
            result = i;
        }
        
    }
    cout << "Result : " << result << endl;
}



bool interface() {
    cout << "Problems"<<endl;
    cout << "1- Sum of naturals divisible by 3 and 5" << endl;
    cout << "Program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user." << endl;
    cout << "2- Greatest common divisor" << endl;
    cout << "Program that, given two positive integers, will calculate and print the greatest common divisor of the two." << endl;

    cout << endl;
    int choice;
    cout << "Please enter number of the problem : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Problem1();
        return false;
        break;
    case 2:
        Problem2();
        return false;
        break;
    default:
        cout << "Please enter valid number" << endl << endl;
        return true;
        break;
    }
}

int main() {
    bool condition = true;
    while (condition == true)
    {
        if(!interface()){
            break;
        }
    }

    system("Pause");
}