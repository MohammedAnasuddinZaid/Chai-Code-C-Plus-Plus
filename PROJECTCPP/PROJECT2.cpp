#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee{

    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout<< "ID: "<< emp.id << " , NAME "<< emp.name << " , SALARY: $"<<emp.salary<<endl;
}

int main(){

    vector<Employee> employees = {
        {101, "hitesh", 100000},
        {102, "ganesh", 300000},
        {103, "max", 500000},
        {104, "shubham", 600000},
        {105, "lalita", 700000},
    };
    //lamdas are un-named functions the syntax being "[](){}"
    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    } );

    cout<< "EMPLOYEES SORTED BY SALART --> HIGEST TO LOWEST \n";

    for_each(employees.begin(),employees.end(),displayEmployee);

    vector<Employee> Highearners;

    copy_if(
        employees.begin(),
        employees.end(), 
        back_inserter(Highearners), 
        [](const Employee& e){
        return e.salary > 500000;
    });

    cout<< "EMPLOYEES who are high earners \n";
    for_each(Highearners.begin(),Highearners.end(),displayEmployee);

    double Totalsalary= accumulate(employees.begin(),employees.end(), 0.0,[](double sum, const Employee& e){
        return sum+ e.salary;
    });

    double averageSalary = Totalsalary / employees.size();

    auto higestpaid = max_element(employees.begin(),employees.end(), [](const Employee& e1, const Employee e2){
        return e1.salary < e2.salary;
    });

    return 0;
}