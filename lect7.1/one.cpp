//que-1---------insertion operation------------


#include <iostream>
using namespace std ;

int main()
{
    int size ;

    cout << "Enter array size: ";
    cin >> size;

    int a[size];
    int i;

    
    for(i=0; i<size; i++);
    {
        cout << "Enter a[" << i <<"]: ";
        cin >> a[i];

    }
    
    // cout << "Array elements: " << endl;
    // for( i = 0 ; i < size ; i++);
    // {
    //     cout << a[i] << " ";
        
    // }

    return 0;
}