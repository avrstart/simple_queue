#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE  4   //размер очереди

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint8_t data[QUEUE_SIZE];       //массив данных
    uint8_t last;                   //указатель на начало
}Queue_t;

void squeue_creation(Queue_t *Q); 
bool squeue_empty(Queue_t *Q);
void squeue_add(Queue_t *Q, uint8_t value);
void squeue_delete(Queue_t *Q); 

    
#endif
