#include "linked_list.h"

template<class T>
class Queue
{
private:
    LinkedList<T>* list;
public:
    Queue<T>();

    void enqueue(T data);

    T dequeue();

    T get_front();

    T get_rear();
};