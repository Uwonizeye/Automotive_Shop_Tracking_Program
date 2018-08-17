#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template <typename T>
class LinkedList
{
  template <typename V>
  friend ostream& operator<<(ostream& output, LinkedList<V> cList);

  template <typename U>
  class Node 
  {
    friend class LinkedList;
  private:
    U * data;
    Node<T> * next;
  };

public:
  LinkedList<T>();
  LinkedList<T>(const LinkedList<T> &);
  ~LinkedList<T>();
  int getSize()const;
  LinkedList<T>& operator+=(T*);
  LinkedList<T>& operator-=(T*);
  T* operator[](int) const;
private:
  Node<T> * head;
};

//LinkedList constructor
template <typename T>
LinkedList<T>::LinkedList() : head(0){}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> & o) : head(0)
{
  int size = o.getSize();
  for (int i = 0; i < size; i ++) {
    (*this) += o[i];
  }
}

//LinkedList destructor
template <typename T>
LinkedList<T>::~LinkedList()
{
  Node<T> *currNode, *nextNode;
  currNode = head;
  while (currNode != 0) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

//Overloading the output operator
//INPUT:references to pointers to: (1)an output stream and (2) to a linked list
//OUTPUT:Formated content of linked list

template <typename T>
ostream& operator<<(ostream& output, LinkedList<T> cList)
{
  
  for (int i = 0; i < cList.getSize(); i++)  {
    output << (*(cList[i]));
  }  
  return output;
}

//Get size of LinkedList
//INPUT:NONE
//OUTPUT:LinkedList size
template <typename T>
int LinkedList<T>::getSize() const {
  Node<T> *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }
  
  return size;
}
//Overloading the [] operator
//INPUT:Integer subscript
//OUTPUT:a pointer to the node at specified location
template <typename T>
T* LinkedList<T>::operator[](int i) const {
    if(i < 0 || i > (getSize()-1)) {
        return 0;
    } else {

        Node<T> *currNode = head;

        for (int j = 0; j < i; j++) {
            currNode = currNode->next;
        }

        return currNode->data;
    }
}


//Overloading the +=operator
//INPUT:new node pointer
//OUTPUT:None
//Side-effect: adds new node to linked list
template <typename T>
LinkedList<T>& LinkedList<T>::operator+=(T* newCust)
{
  Node<T> *currNode, *prevNode;
  Node<T>* newNode = new Node<T>;
  newNode->data = newCust;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*(newNode->data) < *(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == 0) {
    head = newNode;
  }
  else {
    prevNode->next = newNode;
  }

  newNode->next = currNode;

  return *this;
}

//Overloading the -=operator
//INPUT:new node pointer
//OUTPUT:None
//Side-effect: removes new node to linked list
template <typename T>
LinkedList<T> & LinkedList<T>::operator-=(T* cust)
{
  Node<T> *currNode, *prevNode;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (currNode->data == cust)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == 0) 
    return *this;

  if (prevNode == 0) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode;

  return *this;
}


#endif

