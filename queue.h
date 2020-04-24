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

template <typename T>
Queue<T>::Queue()
{
    list = new LinkedList<T>;
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
