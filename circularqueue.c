#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
    int *arr;
};
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct queue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enque(struct queue *q, int value)
{
    if (isfull(q))
    {
        printf("overflow condition :\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("element :%d\n", value);
    }
}
int deque(struct queue *q)
{
    if (isempty(q))
    {
        printf("underflow condition :\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}
int main()
{
    struct queue s;
    s.size = 5;
    s.r = s.f = 0;
    s.arr = (int *)malloc(s.size * sizeof(int));
    enque(&s, 25);
    enque(&s, 26);
    enque(&s, 27);
    enque(&s, 28);
    printf("%d element is delete:\n", deque(&s));
    printf("%d element is delete:\n", deque(&s));
    enque(&s, 29);
    enque(&s, 29);



    if (isfull(&s))
    {
        printf("the queue of array is full");
    }
    else
    {
        printf("the array is not full ");
    }
    if (isempty(&s))
    {
        printf("the array is empty :");
    }
    return 0;
}