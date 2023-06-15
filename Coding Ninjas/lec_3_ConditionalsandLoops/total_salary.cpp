#include <iostream>
using namespace std;
int main(){
    int base_salary=0;
    char grade;

    cout << "Enter the basic salary and grade: ";
    cin >> base_salary >> grade;

    float pf=0.11 * base_salary;
    float hra=0.2 * base_salary;
    float da=0.5 * base_salary;
    int allow=1300;
    if(grade=='A'){
        allow=1700;
    }else if(grade=='B'){
        allow=1500;
    }

    int answer=hra+da+allow+base_salary-pf+0.5;
    cout << answer << endl;
    return 0;
}
