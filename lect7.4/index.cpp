
// que-------------------------1--------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[3][3]={
//         {5,8,2},
//         {6,4,9},
//         {8,4,1}};

//     cout<<a[1][2]<<endl;

//         return 0;
// }



// que-------------------------1--------------------------------------

#include iostream
using namespace std;

int main()
{
    int a [3][3],i,j;

    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            cout<<"Enter a["<<i<<"] ["<<j<<"]:";
            cin >> a[i][j];
        }
    }
    cout << endl << "====================="<< endl << endl;
    
    cout<<"Array is:"<<endl;
        for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

