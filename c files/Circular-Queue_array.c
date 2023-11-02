#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size==q->f)
        return 1;
    return 0;
}

int isEmpty(struct circularQueue*q){
    if(q->r==q->f)
        return 1;
    return 0;
}

void enqueue (struct circularQueue* q,int val){
    if(isFull(q))
        printf("This Circular queue is full, no more elements can pe enqueued.\n");
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("This Circular queue is successfully enqueued with %d\n",val);
    }
}

int dequeue(struct circularQueue *q){
    int a=-1;
    if(isEmpty(q))
        printf("This queue is Empty\n");
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size=4;   //queue will contain max of only 3 elements for arr of size 4
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
 // enqueue elements
    enqueue(&q,12);
    enqueue(&q,14);
    enqueue(&q,21);
    enqueue(&q,1);
// dequeue elements
   printf("Dequeuing element %d\n", dequeue(&q));
   printf("Dequeuing element %d\n", dequeue(&q));
   printf("Dequeuing element %d\n", dequeue(&q));
     if(isEmpty(&q))
        printf("Queue is empty.\n");
    if(isFull(&q))
        printf("Queue is full.\n");
    enqueue(&q,34);
    enqueue(&q,12);
    enqueue(&q,14);
    enqueue(&q,21);
    enqueue(&q,1);
    return 0;
}