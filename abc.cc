#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int arreglo[5]={3,4,5,6,7};
    
    cout << x <<endl;
    cout << arreglo[0] << endl;
    cout << arreglo[4] << endl;
       cout<< "mostrando el bucle" << endl;
    for (auto i: arreglo) 
    {
        cout <<i;
    }
    return 0;
}