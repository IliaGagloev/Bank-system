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
void zapis(Person a){
    ofstream fout;
    fout.open("data.txt", ios::app);
    fout  << a.get_id() << " " << a.get_name() << " " << a.get_surname() << " " << a.get_bal() <<"\n";
    fout.close();
}

vector<Person> fin(){
    ifstream fin;
    fin.open("data.txt");
    vector<Person> a;
    while(!fin.eof()){
        Person a1;
        int id, bal;
        string name ="", surname;
        fin >> id >> name >> surname >> bal;
        a1.init(id, bal, name, surname);
        if(name == ""){
            continue;
        }
        a.push_back(a1);
    }
    fin.close();
    return a;
}
