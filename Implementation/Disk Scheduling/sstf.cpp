#include<iostream>
using namespace std;

int absol(int);
int scan(int *,int,int);

int main(){
   
    int queue[]={98,183,37,122,14,124,65,67};        //This is Disk request queue. First element is head
    int n=sizeof(queue)/sizeof(queue[0]);               //n=size of queue
    int head=53;                                  //head is stored
    int sstfQueue[n+1];                                   //New array storing fcfs head movement
    int headMovementDist=0;                             //Initialization for head movement summation
   // queue[0]=head;
//int pos=scan(queue,head,n);
//cout<<queue[pos]<<endl;
    for(int i=0;i<n;i++){
        
        if(queue[i]!=0){
            int pos=scan(queue,head,n);
            sstfQueue[i]=queue[pos];
            head=queue[pos];
            queue[pos]=0;
        }
    }

    for(int i=1;i<n;i++){                               //Head movement is calcuated for a particular head movement, they are all then added together
    headMovementDist=headMovementDist + absol(sstfQueue[i]-sstfQueue[i-1]);           //We find absolute difference. Because Distance always adds.
    }

    for(int i=0;i<n;i++){                               //Display
        cout<<sstfQueue[i]<<" ";
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

int scan(int queue[],int el,int n){
    int difference=10000;
    int i;
    int savedPos;
   // int n=sizeof(queue)/sizeof(queue[0]);              //error was here, i dont know why but we cant determine size of a passed array in a function
    for(i=0;i<n;i++){
        if(absol(el-queue[i])<difference){
            difference=el;
            savedPos=i;
            
        }
    }
   // cout<<queue[savedPos]<<endl;
  // cout<<n;
    return savedPos;
}