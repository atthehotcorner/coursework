struct Node {
  Node() {
    prev = nullptr;
    next = nullptr;
  };
  int decapitate();
  void clear();
  void printContents();
  Node* prev;
  Node* next;
  int value;
};

struct LinkedList {
  LinkedList() {
    tail = nullptr;
  };
  void append(int data);
  int decapitate();
  void clear();
  void printContents();
private:
  Node* tail;
};

// LL
void LinkedList::append(int data) {
  Node* newx = new Node();
  newx->value = data;
  if (tail != nullptr) {
    newx->prev = tail;
    tail->next = newx;
  }
  tail = newx;
}

int LinkedList::decapitate() {
  if (tail == nullptr) return -1;
  // only 1 node
  else if (tail->prev == nullptr) {
    Node* head = tail;
    int value = tail->value;
    delete head;
    tail = nullptr;
    return value;
  }
  // more than 1
  else return tail->decapitate();
}

void LinkedList::clear() {
  if (tail == nullptr) return;
  if (tail->prev != nullptr) tail->clear(); // more than 1 node
  Node* head = tail;
  delete head;
  tail = nullptr;
}

void LinkedList::printContents() {
  if (tail != nullptr) tail->printContents();
  std::cout << "empty" << std::endl;
}

// Nodes
int Node::decapitate() {
  if (prev->prev == nullptr) {
    Node* head = prev;
    int value = prev->value;
    delete head;
    prev = nullptr;
    return value;
  }
  else prev->decapitate();
}

void Node::clear() {
  if (prev->prev != nullptr) prev->clear();
  Node* current = prev;
  delete current;
  prev = nullptr;
}

void Node::printContents() {
  if (prev != nullptr) prev->printContents();
  std::cout << value << ":";
}
