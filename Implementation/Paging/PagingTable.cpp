#include<iostream>
using namespace std;

int main(){
    int lmem=40;   //in bytes
    int psize=10;
    int pages=lmem/psize;    //no of pages
    cout<<"No of pages: "<<pages<<endl;

    int laddress=24;
    
    //Calc
    int f=laddress/psize;
    int d=laddress%psize;
    cout<<"Frame Number: "<<f<<endl;
    cout<<"Offset: "<<d<<endl;


    //int paddress=f*psize+d;
   // cout<<"Physical Address "<<paddress<<endl;
      int ptable[pages]={10,14,5,2,7};    //array indes will be matched with frame number
      //logical address 64 will be stored in frame number 2 with offset 4. frame number 2 in ptable points to 5, so 5 is the frame number in physica mem
      int frame=ptable[f];   
      int paddress=frame*psize+d;

      cout<<"Physical Address: "<<paddress;



}