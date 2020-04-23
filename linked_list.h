#include <string>
#include <iostream>

using namespace std;

template<class T>
struct Node
{
    T data;
    Node<T>* next;
    Node<T>* prev;
};

template<class T>
class LinkedList
{
private:
    Node<T>* head;
    Node<T>* tail;
    int count;
public:
    LinkedList<T>();

    void insert_at_head(T data);

    void insert_at_tail(T data);

    void delete_from_head();

    void delete_from_tail();

    T read_from_head();

    T read_from_tail();

    T pop_from_head();

    T pop_from_tail();

    int get_count();
};