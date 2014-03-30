class BinaryTreeNode{
	public:
		BinaryTreeNode(){};
		BinaryTreeNode(BinaryTreeNode* p, int cap, int bin);
       
       public:
		BinaryTreeNode *lchild;
		BinaryTreeNode *rchild;
		BinaryTreeNode *parent;
		int capacity;
		int binNumber;
};