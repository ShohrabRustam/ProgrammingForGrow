#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
int main()
{
    // BMI Calculate(Body Mask Index)
    // use variables @weight @height
    // @ < 16.0	Severely Underweight @16.0 - 18.4 Underweight  @18.5 - 24.9 Normal// @25.0 - 29.9 Overweight
    //@30.0 - 34.9	Moderately Obese  @35.0 - 39.9	Severely Obese  @ > 40.0	Morbidly Obese

    cout << endl;
    float weight, height;
    float BMI;
    string result;

    cout << " Enter the weight to calculate Body Mass Index " << endl;
    cin >> weight;
    cout << endl;

    cout << " Enter the height to calculate Body Mass Index in feet" << endl;
    cin >> height;
    cout << endl;

    // feet = abs(height);
    // feet= feet*100;
    // inches=abs(height)*100;
    // feet= feet/100;
    // inches=inches%100;
    // cout <<feet<<"     "<<inches<<endl;
    // heightInFeet = feet*12+inches;
    // cout<<heightInFeet;
    // cout<<pow(heightInFeet,2)<<endl;
    // BMI =( weight / pow(heightInFeet,2))*703;
    height = height * 0.3048;
    BMI = weight / pow(height, 2);

    if (BMI <= 16.0)
    {
        result = "Severely Underweight";
    }
    else if (BMI > 16.0 && BMI <= 18.49999999)
    {
        result = "Underweight";
    }
    else if (BMI >= 18.5 && BMI <= 24.9999999)
    {
        result = "Normal";
    }
    else if (BMI >= 25.0 && BMI <= 29.9999999)
    {
        result = "Overweight";
    }
    else if (BMI >= 30.0 && BMI <= 34.9999999)
    {
        result = "Moderately Obese";
    }
    else if (BMI >= 35.0 && BMI <= 39.9999999)
    {
        result = "Severely Obese";
    }
    else
    {
        result = "Morbidly Obese";
    }
    cout << "Your BMI is : " << BMI << " . It falls within the : " << result << endl<<endl;
    return 0;
}