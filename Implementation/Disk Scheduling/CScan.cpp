#include<iostream>
using namespace std;

int absol(int);

int main(){
   
    int queue[]={53,98,183,37,122,14,124,65,67};       
    int n=sizeof(queue)/sizeof(queue[0]);              
    int head=queue[0];                                  
    int ScanQueue[2*n];                                       
    int headMovementDist=0;                             
    int d;
  //sort...
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(queue[j]>queue[j+1]){
                 int temp=queue[j];
                 queue[j]=queue[j+1];
                 queue[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<queue[i]<<"  ";
    }
    
   cout<<"\nEnter Direction: "<<endl;
    cin>>d;
  
    if(d==-1){                           //Left
        int i,pos;
        for(i=0;i<n;i++){
            if(queue[i]==head){           //gets the position of head in sorted array
                pos=i;                    //stores pos and gets out
                break;
            }
        }
        int k=0;
        for(i=pos;i>=0;i--){              //moves from head towards left till 0th index of sorted queue
            ScanQueue[k]=queue[i];
            k++;
        }
        ScanQueue[k]=0;                   //In scan we touch the extreme as well
        k++;
        ScanQueue[k]=199;                   //In scan we touch the extreme as well
        k++;
      
        for(i=n-1;i>pos;i--){             //moves from next element from head in sorted queue towards right now

            ScanQueue[k]=queue[i];
            k++;
        }
    }

    if(d==1){                               //Right
               int i,pos;
        for(i=0;i<n;i++){
            if(queue[i]==head){
                pos=i;
                break;
            }
        }
        int k=0;
        for(i=pos;i<n;i++){
            ScanQueue[k]=queue[i];
            k++;
        }
        ScanQueue[k]=199;
        k++;
        ScanQueue[k]=0;
        k++;
        for(i=0;i<pos;i++){
            ScanQueue[k]=queue[i];
            k++;
        }
      
    }


    for(int i=1;i<n+1;i++){                               //Head movement is calcuated for a particular head movement, they are all then added together
    headMovementDist=headMovementDist + absol(ScanQueue[i]-ScanQueue[i-1]);           //We find absolute difference. Because Distance always adds.
    }

    for(int i=0;i<n+2;i++){                               //Display
        cout<<ScanQueue[i]<<" ";
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