/*#include <iostream>
using namespace std;
void check(int n){
    if (n>=0){
        cout << "Positive";
    }
    else {
        cout << "Negative";
    }
}
int main (){
    int a;
    cin >> a;
    //check(a);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a>=0 && a%2==0){
        cout << "The number is positive and even" ;
    }
    else if(a>=0 && a%2==1){
        cout << "The number is positive and odd";
    }
    else if(a<0 && a%2==0){
        cout << "The number is negative and even";
    }
    else if(a<0 && a%2==1){
        cout << "The number is negative and odd";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << a << " is the largest";
    }
    else if(b>a && b>c){
        cout << b << " is the largest";
    }
    else {
        cout << c << " is the largest";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a%b==0){
        cout << a << " is divisible by " << b;
    }
    else {
        cout << a << " is not divisible by " << b;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a%4==0 && a%400==0){
        cout << a << " is a leap year";
    }
    else if (a%4==0 && a%100!=0){
        cout << a << " is a leap year";
    }
    else {
        cout << a << " is not a leap year";
    }
    return 0;
}*/
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, D;
    cin >> a >> b >> c;
    D =  b * b - 4 * a * c ;
    cout <<"x1="<<(-b+sqrt(D))/(2*a) << endl;
    cout <<"x2="<<(-b-sqrt(D))/(2*a) ;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c==180){
        cout <<"The triangle is valid";
    }
    else {
        cout <<"The triangle is not valid";
    }
}*/
/*#include <iostream>
using namespace std;
int main(){
    char a;
    cin >> a;
    if (int(a)>=65 && int(a)<=90)
        cout << "Uppercase alphabet";
    else if(int(a)>=97 && int(a)<=122)
        cout <<"Lowercase alphabet";
    else
        cout << "It is not an alphabet";
}*/
/*#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a*a + b*b <=100)
        cout << "Point (" << a << "," << b << ") is in circle";
    else
        cout << "Point (" << a << "," << b << ") is not in circle";
}*/
#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cout <<"Enter weight and price for package 1: ";
    cin >> a >> b;
    cout << "Enter weight and price for package 2: ";
    cin >> c >> d;
    if (b/a > d/c)
        cout << "Package 1 has a better price";
    else if(b/a < d/c)
        cout << "Package 2 has a better price";
    else
        cout << "Two packages have the same price";
}