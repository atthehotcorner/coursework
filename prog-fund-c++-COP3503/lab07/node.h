struct node {
  node() {
    next = nullptr;
    store;
  }
  node* next;
  int store;

  int size();
  void insert(int value);
  void printme();
};

int node::size() {
  if (next == nullptr) return 1;
  else return next->size() + 1;
}

void node::insert(int value) {
  if (next->next->store < value) {
    node* newn = new node();
    newn->store = value;
    newn->next = next->next;
    next = newn;
  }
  else if (next->next != nullptr) next->insert(value);
}

void node::printme() {
  std::cout << store << " ";
  if (next != nullptr) next->printme();
}
