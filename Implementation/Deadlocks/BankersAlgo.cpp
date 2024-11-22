#include<iostream>
using namespace std;

struct available{
    int a;
    int b;
    int c;
};

int main(){
    available ava;
    ava.a=3;              //Available Now.
    ava.b=3;
    ava.c=2;
    
    int k=0;
    int n=5;
    int queue[n];
    int process[n][3]={{4,7,3},{1,2,2},{6,0,0},{2,1,1},{5,3,1}};   //Required.      {process 1  process2  process3  process4  process5}

      while(k!=(n)){
        for(int j=0;j<n;j++){    
            if(ava.a>=process[j][0] && ava.b>=process[j][1]  && ava.c>=process[j][2] && process[j][0]!=-1 && process[j][1]!=-1 && process[j][2]!=-1){
                ava.a=ava.a+process[j][0];
                ava.b=ava.b+process[j][1];
                ava.c=ava.c+process[j][2];
                process[j][0]=-1;
                process[j][1]=-1;
                process[j][2]=-1;
                queue[k]=j+1;                                    //because j has starting index 0 but in queue we need process number so add 1.
                k++;
            }
        }
      }

    cout<<"Safe Sequence: "<<endl;
    for(int i=0;i<n;i++){
        cout<<queue[i]<<" ";
    }
}