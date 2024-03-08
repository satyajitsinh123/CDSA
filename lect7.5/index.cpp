// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//    int a[5][5]= {
    
//     {4,9,3,5,2},
//     {8,3,7,4,8},
//     {2,5,1,3,6},
//     {6,4,9,4,3},
//     {6,2,1,7,9}};

//     int length = sizeof(a) / sizeof(a[0][0]);

//     int sum = 0;

//     for (int i=0; i <=4; i++)
//     {
//         for (int j=0; j<=4; j++)
//         {
//           sum = sum + a[i][j];
//         }
//     }

//     cout << "Average is " << sum / length << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, j;

//     cout << "Enter row & col size: ";
//     cin >> n;

//     int a[n][n], b[n][n], c[n][n];

//     cout << "Enter array a: " << endl;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n; j++)
//         {
//             cout <<"Enter a[" << i << "] [" << j << "]: ";
//             cin >> a[i][j];
//         }
//     }

//     cout << endl<<"=============" << endl;

//       cout << "Enter array b: " << endl;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n; j++)
//         {
//             cout <<"Enter b[" << i << "] [" << j << "]: ";
//             cin >> b[i][j];
//         }
//     }

//      cout << endl
//      <<"=============" << endl;
     
//      for ( i=0; i<n; i++)
//      {
//         for( j=0; j<n; j++)
//         {
//             c[i][j] = a[i][j] + b [i][j]; 
//         }
//      }
    
//     cout << "Array c;"<<endl;

//     for ( i=0; i<n; i++)
//      {
//         for( j=0; j<n; j++)
//         {
//           cout << c[i][j]<< " " ;
//         }
//         cout << endl;
//      }

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int a[5][5]={
        {4,9,3,5,2},
        {8,3,7,4,8},
        {2,5,1,3,6},
        {6,4,9,4,3},
        {8,2,1,7,9}};

    int i ,j;

    for (i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if (i==0 || i==4 || j==0 || j==4)
            {
                cout<<a[i][j]<< "  ";
            }
            else
            {
                cout<< "   ";
            }
        }
        cout << endl;
    }
return 0;
}
