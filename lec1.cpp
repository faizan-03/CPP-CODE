#include <iostream>
#include <fstream>

using namespace std;

void READFILE()
{
    ifstream in("input.txt");

    if (!in.is_open())
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string str;
    while (getline(in, str))
    {
        cout << str << endl;
    }

    in.close();
}

void WRITEFILE(string data)
{
    ofstream out("output.txt");

    if (!out.is_open())
    {
        cout << "Error opening file!" << endl;
        return;
    }

    out << data << endl;

    out.close();
}

class MyClass
{

    int age;
    string name;
    int rollno;

public:
    void input()
    {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollno;
    }

    string display()
    {
        string output = "MY NAME IS " + name + " AND MY AGE IS " + to_string(age) + " AND MY ROLL NO IS " + to_string(rollno);
        cout << output;
        return output;
    }
};

void publicFunction()
{
    cout << "Hello World!" << endl;
    MyClass obj;

    obj.input();
    string output = obj.display();
    WRITEFILE(output);
}

int main()
{
    publicFunction();
    return 0;
}