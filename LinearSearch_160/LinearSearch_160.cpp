#include <iostream>
using namespace std;


int arr[20]; //jumlah array maksimum 
int n; // number of element in the array
int i; // index of array element



void input() {
    while (true) {
        cout << "Enter the numner of element in the array = ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray minimum adalah 1 dan maksimum adalah 20";
    }
    
    //Accept array elements
    cout << "\n================\n";
    cout << " Enter Array Elements\n";
    cout << "\n================\n";
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch() {
    char ch;
    int comparison; //variable menghitung perbandingan

    do
    {   //menerima angka yang akan dicari
        cout << "\nEnter the element that you want to search = "; //langkah 1
        int item;
        cin >> item;

        comparison = 0;
        for (int i = 0; i < n; i++)     //langkah 2,3 dan 4.
        {
            comparison++;
            if (arr[i] == item)         //langkah 5 #Found
            {
                cout << "\n" << item << " Found at position" << (i + 1) << endl;
                break;
            }
        }
        if (arr[i] == n) 
            cout << "\n" << item << "Not found in the array\n";
            cout << "\nNumber of comparison = " << comparison << endl;

            cout << "\nContinue search (y/n) : ";
            cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}
int main()
{
    input();
    LinearSearch();
    return 0;
}
