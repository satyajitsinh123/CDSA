#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
   
//---------------------------- pointer

    int *ptr;
    int a=9;
    ptr=&a;

    cout << "Address is: " << ptr;

//2 ----------------------------------------pointer

 int a=5;
 int *ptr;

 ptr=&a;

 cout << "value is: "<< *ptr;

//qus-3 pointer

int a=5;
int *p;

p=&a;

printf("Address is %d\n",p);
printf("value is %d\n",*p);

array of pointer 

int a[5]={5,8,4,1,9};
int *p[5];

for(int i=0;i<=4;i++){
    p[i]=&a[i];
}

for(int i=0;i<=4;i++){
    printf("Address: %u, value: %d\n",p[i],*p[i]);
}

chain of pointer
int a=5;
int *p1=&a;
int **p2=&p1;
int ***p3=&p2;


cout << a <<endl;
cout << *p1 <<endl;
cout << **p2 <<endl;
cout << ***p3 <<endl;


}