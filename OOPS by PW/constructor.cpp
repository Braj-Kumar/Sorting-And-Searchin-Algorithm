// constructor doesn't have return type
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
    

    // default constructor
    Student(){

    }
    // constructor name is the same name as class name
    // paramitrized constructor
    Student(string s, float g,int r){
        name = s;
        gpa = g;
        rno =r;
    }

    Student(string s,int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
    
};
int main(){
    Student s1("bk",22,6.9);
    // s1.gpa = 9.0;
    // s1.rno = 90;

    Student s2;
    s2.name="kk";
    s2.rno = 12;
    s2.gpa = 8.9;

    Student s3("vv",8.9,98);
    // s3.rno = 97;

    Student s4 = s1; // copy constructor -- deep copy
    s4.name = "jj";

    Student s5(s1); // copy constructor --- deep copy
        s5.name = "ll";
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;

    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;

    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;

    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;

    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    return 0;
}