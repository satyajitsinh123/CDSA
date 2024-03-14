//  -------------------------------1------------------find average of all elements of 1d array.
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     int  n , i , sum;
//     cout <<"enter array size: ";
//     cin >> n;

//     int a[n];
//      for(i=0; i<n; i++)
//        {
//          cout << "enter a["<< i  <<"]: ";
//          cin >> a[i];
//        }

//     for(i=0; i<n; i++)
//     {
//       sum = sum+a[i];
//     }

//   cout << "averege is: " << sum / n;

//     return 0;

//  }






//que-2------Create a 1d Array of all leap years from a givan range.-------------




  #include <iostream>
 using namespace std;

int main()
{
  int start, end, i;

  cout << "Enter satrt year: ";
  cin >> start;

  cout << "Enter end year: ";
  cin >> end;

  for( i=start; i<=end; i++)
  {
   if(i % 4 == 0)
   {
     cout << i << " ";
   }

  }

  cout << endl;

  return 0;

}













