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

    Employee(string n, int a, double s) {
        if (n != "") {
            name = n;
        }
        else {
            cout << "name cannot be empty\n";
            name = "Unknown";
        }

        if (a >= 18 && a <= 60) {
            age = a;
        }
        else {
            cout << "Invaild age\n";
            age = 18;
        }

        if (s > 0) {
            salary = s;
        }
        else {
            cout << "Invaild salary\n";
            salary = 0;
        }
    }

    void GiveRaise(double amount) {
        if (amount > 0) {
            salary += amount;
        }
        else {
            cout << "Invalid\n";
        }
    }

    void print() {
        cout << name << '\n';
        cout << age << '\n';
        cout << salary << '\n';
    }
};


int main() {
    ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        Employee s1;
        Employee s2("mena", 18, 2000);
       s2.GiveRaise(100);
       s2.GiveRaise(-20);
       s1.print();
       s2.print();
        return 0;
    }
