#include<stdio.h>
#include<stdlib.h>
struct node *f=NULL;
struct node *r=NULL;
struct node{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enque(int value){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        printf("the queue is full");
    }
    else{
        n->data=value;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
               r=n;
        }
    }
}
int deque(){
    int val=-1;
    struct node *ptr=f;
    if(f==NULL){
        printf("the queue is empty");
    }
    else{
         f=f->next;
         val=ptr->data;
         free(ptr);        
    }
    return val;
}
int main(){
    enque(45);
    enque(50);
    enque(60);
    printf("delete element is: %d\n",deque());
    linkedlistTraversal(f);  
    return 0;                                                                     
}
