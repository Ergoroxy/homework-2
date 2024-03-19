#include <iostream>
#include <valarray>
#include <cmath>

using namespace std;
int main (){
cout << "Problem 1\n";
    int num1,num2;
    float avg , product;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;
    avg = num1 + num2/2;
    product = num1 * num2;
    cout << "The avg of two numbers:" << avg << endl;
    cout << " The product of two numbers :" << product << endl;
    cout << "Problem 2\n";
    float a,b ,area;
    cout << "Enter the Base of a triangle:";
    cin >> a;
    cout << "Enter the Length of a triangle:";
    cin >> b;
    area =(a*b)/2;
    cout << "The area of a Triangle is : " << area << endl;
    cout <<"Problem 3\n";
    float  Celsius,Fahrenheit,temp;
    cout << "\nEnter the temperature in Celsius: ";
    cin >> Celsius;
    temp = 1.8 * Celsius + 32;
    cout << "\nThe temperature in Fahrenheit is :" << temp << endl;
    cout << "Problem 4\n";
    int base , exponent1 , exponent2 ;




    return 0; }