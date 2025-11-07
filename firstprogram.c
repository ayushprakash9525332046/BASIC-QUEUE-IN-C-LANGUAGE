#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *ptr){
    if(ptr->r==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct queue *ptr){
    if(ptr->f==ptr->r){
        return 1;
    }
    else{
        return 0;
    }
}
void enque(struct queue *ptr,int value){
    if(isfull(ptr)){
        printf("overflow conditiion ");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=value;
        printf("element : %d\n",value);
    }
}
int deque(struct queue *ptr){
    if(isempty(ptr)){
        printf("underflow condition");
    }
    else{
        ptr->f++;
        return ptr->arr[ptr->f];
    }
}
int main(){
    struct queue s;
    s.size=5;
    s.f=s.r=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));
    enque(&s,45);
    enque(&s,65);
    enque(&s,78);
    printf("delete element is :%d\n",deque(&s));
     printf("delete element is :%d\n",deque(&s));
      printf("delete element is :%d\n",deque(&s));
    
    if(isfull(&s)){
        printf("the queue is full");
    }
    if(isempty(&s)){
        printf("the queue is empty");
    }
    return 0;

}