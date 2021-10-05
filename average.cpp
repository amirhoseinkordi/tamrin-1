#include <iostream>

using namespace std;

int main()
{
    string name,lname,res;
    float a,b,c,m;

    cout << "whats your name?";
    cin >> name;
    cout << "and your last name?";
    cin >> lname;
    cout << "your math score?";
    cin >> a;
    cout << "your Science score?";
    cin >> b;
    cout << "your history score?";
    cin >> c;

    m = (a+b+c)/3;

    if(m<12){
        res="fail";
    }else if(12<= m && m <17){
        res="normal";
    }else if(17<= m){
        res="great";}else
        {res="out of range";}

    cout << name << " " << lname <<" your average is : " << m << ". it means you are " << res;

    return 0;
}
