#include <bits/stdc++.h>
using namespace std;


// Problem 5
int main5(){
    ifstream src("source.txt", ios::binary);
    ofstream dst("target.txt", ios::binary);
    if(!src || !dst){ cout<<"File error\n"; return 1; }
    dst << src.rdbuf();
    return 0;
}


// Problem 6
int main6(){
    ifstream in("essay.txt");
    string w; long long c=0;
    while(in>>w) c++;
    cout<<"Total words: "<<c<<"\n";
    return 0;
}


// Problem 7
int main7(){
    ifstream in("numbers.txt");
    long long sum=0,x;
    while(in>>x) sum+=x;
    cout<<"Sum: "<<sum<<"\n";
    return 0;
}


// Problem 8
int main8(){
    ifstream in("values.txt");
    long long x,mn=LLONG_MAX,mx=LLONG_MIN;
    while(in>>x){ mn=min(mn,x); mx=max(mx,x); }
    cout<<"Max: "<<mx<<", Min: "<<mn<<"\n";
    return 0;
}


// Problem 9
struct Student { int id; string name; double gpa; };
int main9(){
    Student s;
    cin>>s.id>>s.name>>s.gpa;
    ofstream out("student.txt");
    out<<s.id<<" "<<s.name<<" "<<s.gpa;
    return 0;
}


// Problem 10
int main10(){
    ifstream in("student.txt");
    Student s;
    in>>s.id>>s.name>>s.gpa;
    cout<<"ID: "<<s.id<<", Name: "<<s.name<<", GPA:"<<s.gpa<<"\n";
    return 0;
}


// Problem 11
int main11(){
    ofstream out("class.txt");
    for(int i=0;i<3;i++){
        Student s; 
        cin>>s.id>>s.name>>s.gpa;
        out<<s.id<<" "<<s.name<<" "<<s.gpa<<"\n";
    }
    return 0;
}


// Problem 12
int main12(){
    ifstream in("class.txt");
    Student s; int k=1;
    while(in>>s.id>>s.name>>s.gpa)
        cout<<"Student "<<k++<<": "<<s.id<<" "<<s.name<<" "<<s.gpa<<"\n";
    return 0;
}


// Problem 13
struct Date { int d,m,y; };
int main13(){
    Date t; cin>>t.d>>t.m>>t.y;
    cout<<setw(2)<<setfill('0')<<t.d<<"-"
        <<setw(2)<<t.m<<"-"<<t.y<<"\n";
    return 0;
}


// Problem 14
struct StudentInfo{ int Id, Age; char Gender; double CGA; };
int main14(){
    StudentInfo s = {101,19,'M',3.4};
    cout<<"Id:"<<s.Id<<", Age:"<<s.Age<<", Gender:"<<s.Gender<<", CGA:"<<s.CGA<<"\n";
    return 0;
}


// Problem 15
struct StudentGrade {
    int Lab[5], Homework[3], Exam[2];
    int total() const {
        int t=0;
        for(int i:Lab) t+=i;
        for(int i:Homework) t+=i;
        for(int i:Exam) t+=i;
        return t;
    }
};
int main15(){
    StudentGrade s;
    for(int &i:s.Lab) cin>>i;
    for(int &i:s.Homework) cin>>i;
    for(int &i:s.Exam) cin>>i;
    int t=s.total();
    cout<<"Total: "<<t<<", Average: "<<(double)t/10<<"\n";
    return 0;
}


// Problem 16
int main16(){
    StudentInfo a[3];
    for(int i=0;i<3;i++) cin>>a[i].Id>>a[i].Age>>a[i].Gender>>a[i].CGA;
    for(int i=0;i<3;i++)
        cout<<a[i].Id<<" "<<a[i].Age<<" "<<a[i].Gender<<" "<<a[i].CGA<<"\n";
    return 0;
}


// Problem 17
int main17(){
    StudentInfo s1={1,20,'F',3.6}, s2;
    s2=s1;
    cout<<"Student1: "<<s1.Id<<"\nStudent2: "<<s2.Id<<"\n";
    return 0;
}


// Problem 18
int main18(){
    StudentInfo a[5];
    for(int i=0;i<5;i++) cin>>a[i].Id>>a[i].Age>>a[i].Gender>>a[i].CGA;
    a[4]=a[2];
    cout<<"3rd: "<<a[2].Id<<", 5th: "<<a[4].Id<<"\n";
    return 0;
}


// Problem 19
struct BankAccount {
    string Name; long long AccountNo; double balance; Date Birthday;
};
int main19(){
    BankAccount b;
    cin>>ws; getline(cin,b.Name);
    cin>>b.AccountNo>>b.balance>>b.Birthday.d>>b.Birthday.m>>b.Birthday.y;
    cout<<b.Name<<" "<<b.AccountNo<<" "
        <<setw(2)<<setfill('0')<<b.Birthday.d<<"-"
        <<setw(2)<<b.Birthday.m<<"-"<<b.Birthday.y<<"\n";
    return 0;
}


// Problem 20
struct Point { double x,y; };
int main20(){
    Point p1,p2;
    cin>>p1.x>>p1.y>>p2.x>>p2.y;
    cout<<"Distance = "<<hypot(p2.x-p1.x,p2.y-p1.y)<<"\n";
    return 0;
}


// Problem 21
double distP(Point a,Point b){ return hypot(a.x-b.x,a.y-b.y); }
int main21(){
    Point p1,p2,p3;
    cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
    cout<<"Perimeter = "<<distP(p1,p2)+distP(p2,p3)+distP(p3,p1)<<"\n";
    return 0;
}


// Problem 22
int main22(){
    Point v[4];
    for(int i=0;i<4;i++) cin>>v[i].x>>v[i].y;
    double minx=v[0].x,maxx=v[0].x,miny=v[0].y,maxy=v[0].y;
    for(int i=1;i<4;i++){
        minx=min(minx,v[i].x); maxx=max(maxx,v[i].x);
        miny=min(miny,v[i].y); maxy=max(maxy,v[i].y);
    }
    cout<<"Area = "<<(maxx-minx)*(maxy-miny)<<"\n";
    return 0;
}


// Problem 23
int main23(){
    StudentGrade a[3];
    for(int i=0;i<3;i++){
        for(int &x:a[i].Lab) cin>>x;
        for(int &x:a[i].Homework) cin>>x;
        for(int &x:a[i].Exam) cin>>x;
    }
    int best=0,score=a[0].total();
    for(int i=1;i<3;i++){
        int t=a[i].total();
        if(t>score){ score=t; best=i; }
    }
    cout<<"Student "<<best+1<<" has highest: "<<score<<"\n";
    return 0;
}


// Problem 24
int main24(){
    vector<Contact> book(10);
    for(int i=0;i<10;i++){
        cin>>ws; getline(cin,book[i].Name);
        cin>>book[i].Phone>>book[i].Email;
    }
    string key; cin>>ws; getline(cin,key);
    bool found=false;
    for(auto &c:book){
        if(c.Name.find(key)!=string::npos){
            cout<<c.Name<<" "<<c.Phone<<" "<<c.Email<<"\n";
            found=true;
        }
    }
    if(!found) cout<<"Not found\n";
    return 0;
}


// MASTER main (choose which to run)
int main(){
    return 0;
}
