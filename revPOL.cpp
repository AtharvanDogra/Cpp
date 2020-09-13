#include <iostream>
#include <cstdlib>
using namespace std;


typedef struct node
{
    int data;
    struct node*next;
}node;

node *start;
int listLen=0;

void createList()
{node* temp=(node*)malloc(sizeof(node));
node *tempPrev;
cout<<"Input list data and break with 0: "<<endl;
start=temp;

cin>>temp->data;
temp->next=(node*)malloc(sizeof(node));

tempPrev=temp;

    while(temp->next!=NULL)
    {   temp=temp->next;
        cin>> temp->data;
        if(temp->data==0)
        {
            // cout<<"In if";
           tempPrev->next=NULL;
           temp=tempPrev;
           
        } 
        else
        {//    cout<<"In else";
            temp->next=(node*)malloc(sizeof(node));
            tempPrev=temp;
            
        }
        
    }
}

void display()
{node *temp=start;
// cout<<start;
cout<<endl;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

        listLen++;      //Length of list
    }

    cout<<endl;
}

void revPOList()
{
int init,end,loc=1;
node *prev=NULL,*curr,*next,*init1,*end1;                 //
    cout<<"Input start/end of reversal: ";
    cin>>init>>end;

    curr=start;
    // prev=curr;
    for(loc=1;loc<init;loc++)
    {
        init1=curr;                                 //error
        curr=curr->next;   
        end1=curr; 
    }

    // cout<<loc; //check loc

    while(loc>=init && loc<=end)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;   

        loc++;     
    }
    init1->next=prev;                               //
    end1->next=curr;

    // cout<<"loc end: "<<loc;

}

main()
{
    createList();
    display();
    revPOList();
    display();
    
}
