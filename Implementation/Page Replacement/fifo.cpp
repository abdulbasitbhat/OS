#include<iostream>
using namespace std;

int main(){
    int q[3]={-1,-1,-1};                                      //We have 3 frames in main memory
    int ref[15]={7,0,1,2,0,3,0,4,2,3,0,3,1,2,0};              //This is the reference queue
    int r=0;                                                  //for keeping track of next input index in frame queue q
    int flag=0;
    int p_hit=0;
    for(int i=0;i<15;i++){                                    //main loop: it traverses ref string if q dosent have that element it replaces the most old in frame queue with it using circular queue principle
        for(int k=0;k<3;k++){     //To check if that element of reference queue is in frame queue, if yes -->page hit so we dont need to update frame queue q. And we increment p hit count
            if(ref[i]==q[k]){
                flag=1;
                p_hit++;
            }
        }
        if(flag!=1){                             //if that el of ref queue is not in frame queue. We add it to queue in circular fashion---++
           q[r]=ref[i];
           r=(r+1)%3;                             //circularly add new elements so that the most old member of frame queue is replaced. if we had a page hit, the element that is present does not get young again
        }
        flag=0;
           cout<<"On Inserting "<<ref[i]<<" page, frames in main memory are: "<<endl;
           for(int j=0;j<3;j++){
               cout<<q[j]<<" ";
           }
           cout<<endl;
           cout<<endl;
    }
    int p_miss=15-p_hit;                                       //p_miss + p_hit = ref queue size
    cout<<"Page Hits: "<<p_hit<<endl;
    cout<<"Page Miss: "<<p_miss<<endl;

}