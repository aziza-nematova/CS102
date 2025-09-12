// Problem 1
#include <iostream>
using namespace std;
int main(){
    int intNumber=30;
    float floatNumber=3.14;
    double doubleNumber=45.1234;
    bool boolean=true;
    char charName='A';
    cout<<"Value of Integer is "<<intNumber<<". Size is "<<sizeof(intNumber)<<endl;
    cout<<"Value of Float is "<<floatNumber<<". Size is "<<sizeof(floatNumber)<<endl;
    cout<<"Value of Double is "<<doubleNumber<<". Size is "<<sizeof(doubleNumber)<<endl;
    cout<<"Value of Char is "<<charName<<". Size is "<<sizeof(charName)<<endl;
    cout<<"Value of Bool is "<<boolean<<". Size is "<<sizeof(boolean)<<endl;
}


//Problem 2
int main () {
    string name =  "Di Menaz";
    int id = 777777;
    string song = "Me, myself and I";
    string movie = "Death Wish";
    cout << name << endl << id << endl << song << endl << movie <<endl;
    return 0;
}

// Problem 3
#include <iostream>
using namespace std;
int main(){
    cout<<"\"I’m standing\" on the edge of some crazy cliff.\nWhat I have to do, I have to catch everybody\\\n\nif they start to go over the cliff—I mean\\\n\\if they’re running and they don’t look\nwhere they’re going I have to come out\nfrom somewhere and catch them.";
}

// Problem 4
#include <iostream>
using namespace std;
int main(){
    int a=189; char b='B';
    float x=a/3.0;
    int y=b;
    float z=(a+b)/5.0;
    char c=b+(a/10-1);
    cout<<x<<" "<<y<<" "<<z<<" "<<c;
}


// Problem 5
#include <iostream>
using namespace std;
int main(){
    int a=12,b=38;
    cout<<"Sum="<<a+b<<endl;
    cout<<"Product="<<a*b;
}


// Problem 6
#include <iostream>
using namespace std;
int main(){
    int x,y;cin>>x>>y;
    cout<<"Sum: "<<x<<" + "<<y<<" = "<<x+y;
}


// Problem 7
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x,y;cin>>x>>y;
    float t=3*(pow(x,2)+3)/(y*4+3);
    cout<<"t="<<t;
}


// Problem 8
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double d;cin>>d;
    double r=d/2;
    double area=4*3.14159*r*r;
    cout<<"Area: "<<area;
}


// Problem 9
#include <iostream>
using namespace std;
int main(){
    double v0,v1,t;cin>>v0>>v1>>t;
    cout<<(v1-v0)/t;
}


// Problem 10
#include <iostream>
using namespace std;
int main(){
    double dist,eff,price;cin>>dist>>eff>>price;
    double cost=dist/eff*price;
    cout<<"The cost of driving is $"<<cost;
}
