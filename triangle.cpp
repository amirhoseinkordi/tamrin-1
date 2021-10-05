#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout << "enter the first one:";
   cin >> a;
   cout << "enter the second one:";
   cin >> b;
   cout << "enter the third one:";
   cin >> c;

   if(a>b+c){
        cout << "\n\athey cant be a triangle :( its first ones fault.\n";
   }else if(c>a+b){
        cout << "\n\athey cant be a triangle :( its third ones fault.\n";
   }else if(b>a+c){
        cout << "\n\athey cant be a triangle :( its second ones fault.\n";
   }else {
        cout << "\nthey can be a triangle :) everything is right.\n";
   }


   return 0;
}
