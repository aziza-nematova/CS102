// Problem 11
#include <iostream>
using namespace std;
int main(){
    double a=1.13e3,b=411e-4;
    cout<<a<<" "<<b;
}


// Problem 12
#include <iostream>
using namespace std;
int main(){
    int students=241,groups=11;
    int first=students/groups;
    int last=students%groups;
    cout<<"In first group: "<<first<<endl;
    cout<<"In last group: "<<last;
}


// Problem 13
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double s;cin>>s;
    double area=(3*sqrt(3)/2)*s*s;
    cout<<"The area of the hexagon is "<<area;
}


// Problem 14
#include <iostream>
using namespace std;
int main(){
    int num=31;
    num++;
    num*=3;
    num-=14;
    num/=4;
    num--;
    num%=9;
    cout<<num;
}


// Problem 15
#include <iostream>
using namespace std;
int main(){
    char a='A';
    cout<<(char)(a+7);
    cout<<(char)(a+4);
    cout<<(char)(a+11);
    cout<<(char)(a+11);
    cout<<(char)(a+14);
    cout<<(char)(a-32);
}


// Problem 16
#include <iostream>
using namespace std;
int main(){
    float x=17,y=1;
    float z=x+(++x)/(3*y*2);
    cout<<z;
}


// Problem 17
#include <iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    cout<<(a==b);
}

// Problem 18
#include <iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    cout<<((a<140)&&(a<b));
}


// Problem 19
#include <iostream>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    cout<<(a>b && a>c);
}


// Problem 20
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    cout<<((a>=0)||(b>=0)||(c>=0)||(d>=0)||(e>=0));
}

//Problem 21
#include <iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    cout<<((a+b>30 && a*b>30) ? 1:0)<<" ";
    cout<<(((a+b>30)||(a*(b-10)>30))?1:0)<<" ";
    cout<<((a>30||b>30)?1:0);
}


// Problem 22
#include <iostream>
using namespace std;
int main(){
    double x,y;cin>>x>>y;
    cout<<(y*30.48>x);
}
