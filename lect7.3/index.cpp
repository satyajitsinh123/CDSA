// ---qu-1-----createe a menu-driven program to perform crud operation on given 1d array-----

#include <iostream>
using namespace std;


int main()
{
    int size;
    int pos, elem;
    cout<<"Enter array size: ";

    cin >> size;

    int a[size];
    cout << "Enter array element: ";

    for(int i=0; i<size; i++)
    {
      cout << "Enter a[" << i << "]: ";
      cin >> a[i];
    }

    cout<<endl<< "===================" << endl ;
       

    int choice;


    do{
        cout << "press 1 for insert an element" << endl;
        cout << "press 2 for update an element" << endl;
        cout << "press 3 for delete an element" << endl;
        cout << "press 4 for view all element" << endl;
        cout << "press 0 for exit " << endl;

        cout<<"Enter your choice: ";
        cin>> choice;
        
        switch(choice)
        {
            case 1: 
               

            cout << "Enter possition";
            cin >> pos;

            cout << "Enter new element";
            cin >> elem;

            for(int i=size
            ; i>pos; i--)
            {
               a [i+1] = a [i];
            }
            size++;
            a [pos] = elem;

            cout << "Element insert successfully....";
            cout << endl;
                  break;
            case 2:
            

            cout << "Enter possition";
            cin >> pos;

            cout << "Enter new element";
            cin >> elem;

            a[pos]=elem;

            cout <<"Element updadet successfully...." << endl;

                 break;      
            case 3: 
                 break;      
            case 4:
            cout << endl 
                 << "Array is: ";
            for(int i =0;  i < size; i++)
            {
              cout << a[i] << " ";
            }
            cout << endl;
                 break;      
            case 0:
                 break;
            default:
                 cout << "Enter valid choice...." << endl ;
                 break;    

        }

    }
    while(choice !=0);

     return 0;
}