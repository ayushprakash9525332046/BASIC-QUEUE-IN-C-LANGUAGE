#include <stdio.h>
#include <stdlib.h>
struct node{
  int size;
  int f;
  int r;
  int *arr;
};
int isfull(struct node *q){
    if(q->r+1%q->size==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct node *q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}
void enque(struct node *q,int value){
    if(isfull(q)){
        printf("overflow condition ");
    }
   else{
    q->r+1%q->size++;
    q->arr[q->r+1%q->size];
   }
}
int deque(struct node *q){
    if(isempty(q)){
        printf("underflow condition ");
    }
    else{
        q->f+1%q->size++;
        return q->arr[q->f+1%q->size];
    }
}
int main(){
    struct node s;
    s.f=s.r=0;
    s.size=20;
    enque(&s,35);
    enque(&s,45);
    enque(&s,55);
    printf("%d is deque",deque(&s));
    return 0;
}