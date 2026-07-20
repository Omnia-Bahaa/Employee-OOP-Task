// task with c++
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <deque>
#include <stack>
#include <utility>
#include<set>
#include<map>
#include <numeric>
using namespace std;

class Employee {
private:

    string name;
    int age;
    double salary;
public:

    Employee() {
        name = "Unknown";
        age = 18;
        salary = 0;
    }

void setName(string n){
     if (n != "") {
            name = n;
        }
        else {
            cout << "name cannot be empty\n";
            name = "Unknown";
        }
}

void setAge(int a){
     if (a >= 18 && a <= 60) {
            age = a;
        }
        else {
            cout << "Invaild age\n";
            age = 18;
        }
}

void setSalary(double s){
    if (s > 0) {
            salary = s;
        }
        else {
            cout << "Invaild salary\n";
            salary = 0;
        }
    }

string getName(){
    return name;
}

int getAge(){
    return age;
}

double getSalary(){
    return salary;
}

    Employee(string n, int a, double s) {
       setName(n);
        setAge(a);
        setSalary(s);
    }

    void GiveRaise(double amount) {
        if (amount > 0) {
            salary += amount;
        }
        else {
            cout << "Invalid\n";
        }
    }

    void DisplayInfo() {
        cout <<"Name: "<< name << '\n';
        cout <<"Age: "<< age << '\n';
        cout << "salary: "<<salary << '\n';
    }
};


int main() {
    ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        Employee s1;
        Employee s2("mena", 18, 2000);
       s2.GiveRaise(100);
       s2.GiveRaise(-20);
      s1.DisplayInfo();
        s2.DisplayInfo();
        return 0;
    }
