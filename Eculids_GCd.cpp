//log(N)
#include<iostream>
using namespace std;
int gcd(int a,int b )//a dovodent b divisor //a%b remainder
{
    if(b==0){
        return a;
    }
return gcd(b,a%b);
}
int main(){
int a,b;
cin >> a>>b;

cout << gcd(a,b) << endl; //doesnt matter on the bigger or smaller number
cout << a*b/gcd(a,b);
}