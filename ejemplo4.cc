#include <iostream>
using namespace std;
int main()
{

    int arreglo[10]={1,4,5,3,10,20,21,11,66,67};
    
    int min = arreglo [0];
    int total =0;
    
    for (auto i : arreglo)
    {
        if (min > i)
        min = i;
        
    }
    
    cout << "El valor minimo es: " << min <<endl;
}