#include "simple_queue.h"

//создание очереди
void squeue_creation(Queue_t *Q) 
{ 
    Q->last=0; 
}

//проверка очереди на пустоту
bool squeue_empty(Queue_t *Q) 
{
    if (Q->last==0) 
        return true;
    else 
        return false;
}

//добавление элемента
void squeue_add(Queue_t *Q, uint8_t value) 
{
    if (Q->last == QUEUE_SIZE)
    { 
        return; 
    }

    Q->data[Q->last++] = value;
}

//удаление элемента
void squeue_delete(Queue_t *Q) 
{
    for (int i=0; (i < Q->last) && (i < QUEUE_SIZE); i++) //смещение элементов
        Q->data[i]=Q->data[i+1]; Q->last--;
}
