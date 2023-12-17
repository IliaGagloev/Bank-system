#include<iostream>
#include<string.h>
#include"func.hpp"

using namespace std;
int print(int a){
    cout << a << "\n";
}

Person vvod(int last_id){
    int id = last_id, bal = 0;
    string name, surname;
    cin >> name >> surname;
    Person a;
    a.init(id, bal, name, surname);
    return a;
}
void popolnenie(Person* a){
    cout <<  "Vvedite summu popolnenia" << "\n";
    int n;
    cin >> n;
    (*a).pop(n);
}
void perevod(Person* a, Person* b){
    cout << "Vvedite summu perevoda" << "\n";
    int n;
    cin >> n;
    if((*b).get_bal() < n){
        cout << "Error\n";
        return;
    }
    (*b).pop(-1 * n);
    (*a).pop(n);
}
