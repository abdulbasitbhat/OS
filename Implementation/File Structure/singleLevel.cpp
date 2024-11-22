#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    string data;
    struct node *next;
};


int main(){
    struct node *rootDir;
    struct node *file1=(struct node *)malloc(sizeof(struct node));
     struct node *file2=(struct node *)malloc(sizeof(struct node));
      struct node *file3=(struct node *)malloc(sizeof(struct node));
       struct node *file4=(struct node *)malloc(sizeof(struct node));
    
    file1->data="File1";
    file1->next=file2;
    
    file2->data="File2";
    file2->next=file3;

    file3->data="File3";
    file3->next=file4;

    file4->data="File4";
    file4->next=NULL;

    rootDir=file1;

    cout<<"Dispay\n";
    struct node *ptr;
    ptr=rootDir;
    while(ptr->next!=NULL){
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;

}