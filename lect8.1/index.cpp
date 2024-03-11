// #include <iostream>
// using namespace std;

// // function definition-----

// void satyajitsinh(int satya)
// {
//     cout << "my name satyajitsinh"<<endl;
//     cout << "my age is 23" << endl;
//     cout<< satya;
// }
// // function definition-----

// void rushirajsinh( int rushi)
// {
//     cout << "my name rushirajsinh"<<endl;
//     cout << "my age is 26" << endl;
//     cout<<rushi;
// }
// int main()
// {
//     satyajitsinh(1) ;//funtion call
//     rushirajsinh(1);

//     return 0;
// }



#include <iostream>
using namespace std;

void addition(int a, int b)
{
    cout<<"Addition is :"<<a+b<<endl;
}

void mult(int a, int b)
{
    cout<<"multiplication is :"<<a*b<<endl;
}

void division ( int a , int b){
cout<<"division is  : "<<a/b<<endl;
}

void subtraction ( int a , int b){
cout<<"subtraction is  : "<<a-b<<endl;
}


int main()
{
    addition(5,6);
    addition(8,9);
    addition(6,7);
    addition(36,23);
    mult(8,6);
    division(4,2);
    subtraction(9,3);

    return 0;
}