#include <exception>
#include <iostream>
#include <new>

template <typename T>
struct Node {
  Node* next;
  T value;
};

template <typename T>
struct LinkedList {
  LinkedList() {
    head = nullptr;
    tail = nullptr;
  }
  void append(T);
  void prepend(T);
  void insertAt(T, unsigned int const);
  T decaudate();
  T decapitate();
  T removeAt(unsigned int const);
  void clear();
  T itemAtHead();
  T itemAtTail();
  T itemAt(T);
  bool contains(T);
  unsigned int length();
  void removeDuplicates();
private:
  Node* head;
  Node* tail;
};
 
void LinkedList::append(T data) {
  Node* newn = new Node();
  newn->value = data;
  newn->next = nullptr;
  
  if (head == nullptr) head = newn;
  else tail->next = newn;
  tail = newn;
}
 
void LinkedList::prepend(T data) {
  Node* newn = new Node();
  newn->value = data;
  if (head->next == nullptr) tail = head; // move tail if only one item
  newn->next = head;
  head = newn;
}
 
void LinkedList::insertAt(T data, unsigned int const position) {
  if (head == nullptr || position > length()) throw std::exception();

  Node* newn = new Node();
  newn->value = data;

  unsigned int count = 0;
  Node* current = head;
  while (current != nullptr) {
    // first position
    if (position == 0) {
      prepend(data);
      return;
    }
    // next item is our position
    else if (count+1 == position) {
      newn->next = current->next;
      current->next = newn;
      return;
    }
    else {
      current = current->next;
      ++count;
    }
  }
}
 
T LinkedList::decaudate() {
  if (head == nullptr) throw std::exception();

  // Head is tail
  if (head->next == nullptr) {
    int value = head->value;
    clear();
    return value;
  }
  // Get second to last node
  else {
    Node* temp = head;
    while (temp->next->next != nullptr) {
      tail = temp;
      temp = temp->next;
    }
    int value = temp->value;
    delete temp;
    tail->next = nullptr;
    return value;
  }
}
 
T LinkedList::decapitate() {
  if (head == nullptr) throw std::exception();

  Node* temp = head;
  if (head->next == nullptr) tail = nullptr; // Head is also tail
  head = temp->next;
  int value = temp->value;
  delete temp;
  return value;
}
 
T LinkedList::removeAt(unsigned int const position) {
 if (head == nullptr || position > length()) throw std::exception();

  unsigned int count = 0;
  Node* current = head;
  while (current != nullptr) {
    // first position
    if (position == 0) {
      int value = head->value;
      decapitate();
      return value;
    }
    // last position
    else if (position == length()) {
      int value = tail->value;
      decaudate();
      return value;
    }
    // next item is our position
    else if (count+1 == position) {
      Node* temp = current->next;
      int value = temp->value;
      delete temp;
      current->next = current->next->next;
      return value;
    }
    else {
      current = current->next;
      ++count;
    }
  }
}
 
void LinkedList::clear() {
  if (head == nullptr) return;

  Node* current = head;
  while (current != nullptr) {
    Node* next = current->next;
    delete current;
    current = next;
  }
  head = nullptr;
  tail = nullptr;
}
 
T LinkedList::itemAtHead() {
  if (head == nullptr) throw std::exception();
  return head->value;
}
 
T LinkedList::itemAtTail() {
  if (tail == nullptr) throw std::exception();
  return tail->value;
}
 
T LinkedList::itemAt(unsigned int const position) {
  if (head == nullptr || position > length()) throw std::exception();

  unsigned int count = 1;
  Node* current = head;
  while (current != nullptr) {
    if (count == position) return current->value;
    else {
      current = current->next;
      ++count;
    }
  }
}
 
bool LinkedList::contains(T value) {
  if (head == nullptr) throw std::exception();

  Node* current = head;
  while (current != nullptr) {
    if (current->value == value) return true;
    else current = current->next;
  }
  return false;
}
 
unsigned int LinkedList::length() {
  if (head == nullptr) return 0;

  unsigned int count = 0;
  Node* current = head;
  while (current != nullptr) {
    current = current->next;
    ++count;
  }
  return count;
}
 
void LinkedList::removeDuplicates() {
  Node* current = head;
  while (current != nullptr) {
    int store = current->value;
    Node* temp = current;
    while (temp != nullptr) {
      if (temp->next != nullptr) {
        if (temp->next->value == store) {
          //remove next
          Node* next = temp->next;
          temp->next = next->next;
          delete next;
        }
      }
      temp = temp->next;
    }
    current = current->next;
  }
}
