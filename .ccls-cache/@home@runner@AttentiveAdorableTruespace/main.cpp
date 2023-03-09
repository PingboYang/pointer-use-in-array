#include <iostream>
using namespace std;

int main() {
  int ar[]={10,20,30,15};
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