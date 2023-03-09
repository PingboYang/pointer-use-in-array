#include <iostream>
using namespace std;

void printArray(int ar[],int size);
void printArrayPointers1(int ar[],int size);

int main() {
  const int size=4;
  int ar[]={10,20,30,15};
  cout<<"\nPrint array using subscripts";
  printArray(ar,size);
    cout<<"\n----------------";
  cout<<"\nPrint array using address";
  printArrayPointers1(ar,size);
  int *pA;
  pA=ar;
  pA++;
  cout<<"\nAddress of ar= "<<long(ar);
  cout<<"\nAddress of ar= "<<long(ar+1);
  cout<<"\nAddress of ar= "<<long(ar+2);
  cout<<"\nAddress of ar= "<<long(ar+3);
  //loop the line6-9
  for(int i=0; i<=3;i++){
    cout<<"\nAddress of ar= "<<long(ar+i);
  }
  
  cout<<"\n*ar= "<<*ar;
  cout<<"\n*(ar+0)= "<<*(ar+0);
  cout<<"\n*(ar+1)= "<<*(ar+1);
  cout<<"\n*(ar+2)= "<<*(ar+2);
  cout<<"\n*(ar+3)= "<<*(ar+3);
  cout<<"\nar[0] is: "<<ar[0];
  cout<<"\nar[0] is: "<<ar[1];
  cout<<"\nar[0] is: "<<ar[2];
  cout<<"\nar[0] is: "<<ar[3];
  cout<<"\n";
  for(int i=0;i<4;i++){
    cout<<"\n"<<ar[i];
  }

}
void printArray(int ar[],int size){
  for(int i=0;i<size;i++){
    cout<<"\n"<<ar[i];
  }
}
void printArrayPointers1(int ar[],int size){
  for (int i=0; i<size;i++){
    cout<<"\n"<<*(ar+i);
    cout<<"\n"<<ar+1;
  }
}