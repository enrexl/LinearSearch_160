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
    cout << "\n=============\n";
    cout << " Enter Array Elements\n";
    cout << "\n=============\n";
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }

}
int main()
{
  
}
