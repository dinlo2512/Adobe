#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

void loading()
{
    char a = 177, b = 219;
    cout << "\n\t\t\t\t\t\tLoading...\n\n";
    cout << "\t\t\t\t\t";
    for (int i = 0; i < 26; i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t\t";
    for (int i = 0; i < 26; i++)
    {
        cout << b;
        Sleep(100);
    }
    cout << "\nCompeleted!!!";
    Sleep(500);
    system("cls");
    system("color F");
}

int main()
{
    cout << "Nhan phim Enter de bat dau...";
    cin.ignore();
    loading();
    cout << endl;
    fstream newfile1;
    newfile1.open("meohen.txt", ios::in);
    if (newfile1.is_open())
    {
        string tp;
        while (getline(newfile1, tp))
        {
            cout << tp << endl;
            Sleep(20);
        }
        newfile1.close();
    }
//    system("pause");
        fstream newfile2;
    newfile2.open("hen.txt", ios::in);
    if (newfile2.is_open())
    {
        string tp;
        while (getline(newfile2, tp))
        {
            cout << tp << endl;
            Sleep(20);
        }
        newfile2.close();
    }
    system("pause");
    return 0;
}
