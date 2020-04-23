#include "queue.h"

template <typename T>
Queue<T>::Queue()
{
    LinkedList<T> list = new LinkedList<T>;
}

template <typename T>
void Queue<T>::enqueue(T data)
{
    list->insert_at_head(data);
}

template <typename T>
T Queue<T>::dequeue()
{
    return list->pop_from_tail();
}

template <typename T>
T Queue<T>::get_front()
{
    return list->read_from_tail();
}

template <typename T>
T Queue<T>::get_rear()
{
    return list->read_from_head();
}