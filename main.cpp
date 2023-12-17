#include<iostream>
#include<vector>

#include"func.hpp"

using namespace std;

int main(){
    int a = 10;
    print(a);
    vector<Person> data;
    int tmp;
    cin >> tmp;
    while(tmp != 0){
        if(tmp == 1){
            Person a = vvod(data.size());
            data.push_back(a);
            data[data.size() - 1].print();
        }else if(tmp == 2){
            cout << "Vvedite id" << "\n";
            int id;
            cin >> id;
            popolnenie(&data[id -1]);
            data[id - 1].print();
        }else if(tmp == 3){
            cout << "Vvedite id 2 chelovek dlya perevoda" << "\n";
            int id1, id2;
            cin >> id1 >> id2;
            perevod(&data[id1-1], &data[id2-1]);
            data[id1-1].print();
        }
        cin >> tmp;
    }
}