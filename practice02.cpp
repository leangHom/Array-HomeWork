#include <iostream>
using namespace std;
int printMainMenu();
void pressEnterToContinue(){
    cout<<"-----------<<press Enter to continue>>------------"<<endl;
    cin.ignore();
    cin.get();
}
struct Worker
{
    int id;
    string name;
    char gender;
    float hours, wage;

    void input()
    {
        cout << "------------[ Input Worker Info ]---------------" << endl;
        cout << "\tEnter Worker ID : ";
        cin >> id;
        cout << "\tEnter Worker Name : ";
        cin.ignore();
        getline(cin, name);
        cout << "\tEnter Worker Gender : ";
        cin >> gender;
        cout << "\tEnter Worker Hours : ";
        cin >> hours;
        cout << "\tEnter Worker Wage : ";
        cin >> wage;
    }
    void output()
    {
        cout << "\tWorker ID :" << id << endl;
        cout << "\tWorker Name : " << name << endl;
        cout << "\tWorker Gender : " << gender << endl;
        cout << "\tWoker Wage : " << wage << endl;
        cout << "\tWorker Hours : " << hours << endl;
    }
};
 int main()
{
    system("cls");
    int option;
    int n = 5;
    Worker workers[n];
    int counter=0;
    do
    {
        option = printMainMenu();
        system("clear");
        switch (option)
        {
            case 1:
            workers[counter++].input();
            break;
            case 5:
            for(int i =  0; i<<counter; i++){
            workers[i].output();
            cout<<"-----------------------"<<endl;
            }
            break;
            case 6:
            cout<<"Exit from the program!! Thank you !! "<<endl;
            defualt:
            cout<<"Invalid option !! choose again!! " <<endl;
            break;
        }
        cout << "User option is : " << option << endl;
        pressEnterToContinue();
    } while (option != 6);

    return 0;
}
void logo()
{
    cout << "__        __         _                                        " << endl;
    cout << "\\ \\      / /__  _ __| | _____ _ __                            " << endl;
    cout << " \\ \\ /\\ / / _ \\| '__| |/ / _ \\ '__|                           " << endl;
    cout << "  \\ V  V / (_) | |  |   <  __/ |                              " << endl;
    cout << " __\\_/\\_/ \\___/|_|  |_|\\_\\___|_|                          _   " << endl;
    cout << "|  \\/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ " << endl;
    cout << "| |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|" << endl;
    cout << "| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ " << endl;
    cout << "|_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__|" << endl;
    cout << "                          |___/                               " << endl;
}

int printMainMenu()
{
    int option;
    logo();
    cout << "\t1. Add New Worker " << endl;
    cout << "\t2. Edit Worker Information" << endl;
    cout << "\t3. Search Worker Information" << endl;
    cout << "\t4. Delete Worker Information " << endl;
    cout << "\t5. Show workers " << endl;
    cout << "\t6. Exit " << endl;
    cout << ">>> Choose your option : ";
    cin >> option;
    return option;

}