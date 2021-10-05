#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float w,h,bmi;
    string res;

    cout << "Enter weight (in kg):";
    cin >> w;
    cout << "Enter height (in cm):";
    cin >> h;

    h = h/100;
    bmi=w/pow(h,2);

    if(bmi<18.5){
        res="underweight";
    }else if(18.5< bmi && bmi <24.9){
        res="normal";
    }else if(25< bmi && bmi <29.9){
        res="overweight";
    }else if(30< bmi && bmi <34.9){
        res="obese";
    }else{
        res="extremely obese";
    }

    cout <<"your BMI is : " << bmi << ". it means you are " << res;
    return 0;
}
