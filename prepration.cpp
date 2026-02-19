#include<iostream>
using namespace std;

class Person {
    
    string name;
    int Id;
    char Gender;

    public:

    void setInfo(string n, int id, char g) {
        name = n;
        Id = id;    
        Gender = g;
    } 

    void setInfo(){
      
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> Id;
        cout << "Enter Gender (M/F): "; 
        cin >> Gender;
    
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << Id << endl;
        cout << "Gender: " << Gender << endl;
    }
};

int main(){

    Person p1;
  
    // p1.name = "Bob"; 
    // p1.Id = 54321;
    // p1.Gender = 'M';
    // p1.displayInfo();


    p1.setInfo("Alice", 12345, 'F');
    p1.displayInfo(); 
    
    
     
    cout <<"-----------------------------" << endl;
    Person p2;
    p2.setInfo();
    cout <<"-----------------------------" << endl;
    p2.displayInfo();

    return 0;
}