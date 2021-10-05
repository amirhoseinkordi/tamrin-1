#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char ext;

    do{
    float num1=0;
    int num2=0;
    string func;
    int sum=0;
    float numr1=0;


    cout << "Please enter number 1 : ";
    cin >> num1;
    cout << "choose your function ( * (for Multiplication), rad (for Radical), cos , cot , tan , fac (for factorial) ): ";
    cin >> func;
    if(func=="*"){
        cout << "Please enter number 2 : ";
        cin >> num2;
        sum = num1 * num2;
        cout <<num1 << " * " <<num2 <<" = " << sum;
    }else if(func=="rad"){
        cout <<"Radical " <<num1 <<" is: " << sqrt(num1);
    }else if(func=="fac"){
        for(int i=0; i<num1; ++i){
            sum = sum+(num1-i);
        }
        cout <<"!" << num1 << " = " << sum;
    }else if(func=="cos" || func=="cot" || func=="tan"){
        numr1= num1*3.14/180;
        if(func=="cos"){
        cout <<"cos " <<num1 <<" = " << cos(numr1);}
        if(func=="cot"){
        cout <<"cot " <<num1 <<" = " << 1/tan(numr1);}
        if(func=="tan"){
        cout <<"tan " <<num1 <<" = " << tan(numr1);}
    }

    cout << "\nExit? ( y / n )";
    cin >> ext;
    }while(ext=='n');




    return 0;
}
