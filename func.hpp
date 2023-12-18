#ifndef FUNC_HPP
#define FUNC_HPP
#pragma once
#include<string.h>
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;
class Person{
private:
    int id, bal;
    long long card_number;
    string name, surname;
public:
    void init(int id_, int bal_, string name_, string surname_){
        id = id_;
        bal = bal_;
        name = name_;
        surname = surname_;
    }
    int get_id(){
        return id;
    }
    int get_bal(){
        return bal;
    }
    string get_name(){
        return name;
    }
    string get_surname(){
        return surname;
    }
    int pop(int n){
        bal+=n;
    }
    void print(){
        cout << id << " " << bal << " " << name << " " << surname << "\n";
    }
};

int print(int a);
Person vvod(int last_id);
void popolnenie(Person* a);
void perevod(Person* a, Person* b);
void zapis(Person a);
vector<Person> fin();

#endif