#include<iostream>
using namespace std;

int absol(int);

int main(){
   
    int queue[]={53,98,183,37,122,14,124,65,67};        //This is Disk request queue. First element is head
    int n=sizeof(queue)/sizeof(queue[0]);               //n=size of queue
    int head=queue[0];                                  //head is stored
    int fcfsQueue[n];                                   //New array storing fcfs head movement
    int headMovementDist=0;                             //Initialization for head movement summation

    for(int i=0;i<n;i++){
        fcfsQueue[i]=queue[i];                          //Logic for fcfs. Simply copying
    }

    for(int i=1;i<n;i++){                               //Head movement is calcuated for a particular head movement, they are all then added together
    headMovementDist=headMovementDist + absol(fcfsQueue[i]-fcfsQueue[i-1]);           //We find absolute difference. Because Distance always adds.
    }

    for(int i=0;i<n;i++){                               //Display
        cout<<fcfsQueue[i]<<" ";
    }
    cout<<endl;
    cout<<"Head Movement: "<<headMovementDist<<endl;
}

int absol(int el){                                      //Absolute value of an element code
    if(el>=0){
        return el;
    }
    else
    return -el;
}