#include "linked_list.h"

template <typename T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    count = 0;
}

template <typename T>
void LinkedList<T>::insert_at_head(T data)
{
    Node<T>* new_node = new Node<T>;
    new_node->data = data;
    if (this->get_count() == 0)
    {
        this->head->next = new_node;
        this->head->next->prev = this->head;
        this->head->next->next = this->tail;
        this->tail->prev = this->head->next;
    } else
    {
        new_node->next = head->next;
        new_node->next->prev = new_node;
        new_node->prev = head;
        head->next = new_node;
        this->count++;
    }
}

template <typename T>
void LinkedList<T>::insert_at_tail(T data)
{
    Node<T>* new_node = new Node<T>;
    new_node->data = data;
    new_node->prev = tail->prev;
    new_node->prev->next = new_node;
    new_node->next = tail;
    tail->prev = new_node;
    this->count++;
}

template <typename T>
int LinkedList<T>::get_count()
{
    return this->count;
}

template <typename T>
void LinkedList<T>::delete_from_head()
{
    this->head->next = this->head->next->next;
    this->head->next->prev = this->head;
    this->count--;
}

template <typename T>
void LinkedList<T>::delete_from_tail()
{
    this->tail->prev = this->tail->prev->prev;
    this->tail->prev->next = this->tail;
    this->count--;
}

template <typename T>
T LinkedList<T>::read_from_head()
{
    return this->head->next->data;
}

template <typename T>
T LinkedList<T>::read_from_tail()
{
    return this->tail->prev->data;
}

template <typename T>
T LinkedList<T>::pop_from_head()
{
    T data_to_return = this->read_from_head();
    this->delete_from_head();
    this->count--;
    return data_to_return;
}

template <typename T>
T LinkedList<T>::pop_from_tail()
{
    T data_to_return = this->read_from_tail();
    this->delete_from_tail();
    this->count--;
    return data_to_return;
}
