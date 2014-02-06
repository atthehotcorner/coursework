struct llist {
  llist() {
    head = nullptr;
  }
  node* head;

  unsigned int size();
  void insert(int value);
  void remove(int value);
  void clear();
  void printContents();
  //friend llist& operator[](int& i);
};

/*llist& operator[](int& i) {
  return *i;
}*/

unsigned int llist::size() {
  if (head == nullptr) return 0;
  else return head->size();
}

void llist::insert(int value) {
  if (head == nullptr || value < head->store) {
    // first postition
    node* newn = new node();
    newn->store = value;
    newn->next = head;
    head = newn;
  }
  else head->insert(value);
}

void llist::remove(int value) {
  if (head == nullptr) return;

  if (head->store == value) {
    node* temp = head;
    head = head->next;
    delete temp;
    return;
  }

  node* current = head;
  while (current != nullptr) {
    if (current->next->store == value) {
      node* next = current->next->next;
      node* todelete = current->next;
      delete todelete;
      current->next = next;
      current = nullptr;
    }
    else current = current->next;
  }
}

void llist::clear() {
  node* current = head;
  while (current != nullptr) {
    node* temp = current;
    current = current->next;
    delete temp;
  }
  head = nullptr;
}

void llist::printContents() {
  if (head != nullptr) head->printme();
  else std::cout << "empty" << std::endl;
}
