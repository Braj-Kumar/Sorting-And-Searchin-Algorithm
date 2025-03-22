#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int rno;
    float gpa;
};
int main()
{
    Student s1;
    s1.name = "bk";
    s1.age = 22;
    cin >> s1.rno;
    s1.gpa=6.95;

    Student s2;
    s2.name = "bkk";
    s2.age = 21;
    cin >> s2.rno;
    s2.gpa=6;

    cout << s1.name << s1.age << s1.rno << s1.gpa;

    cout << s2.name << s2.age << s2.rno << s2.gpa;

    return 0;
}