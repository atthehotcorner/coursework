main: main.o BinarySearchTree.o BinaryTree.o BinaryTreeNode.o BinPacking.o MaxWinnerTree.o
	g++ -o main main.o BinarySearchTree.o BinaryTree.o BinaryTreeNode.o BinPacking.o MaxWinnerTree.o
main.o: main.cpp
	g++ -c main.cpp
BinarySearchTree.o: BinarySearchTree.cpp
	g++ -c BinarySearchTree.cpp
BinaryTree.o: BinaryTree.cpp
	g++ -c BinaryTree.cpp
BinaryTreeNode.o: BinaryTreeNode.cpp
	g++ -c BinaryTreeNode.cpp
BinPacking.o: BinPacking.cpp
	g++ -c BinPacking.cpp
MaxWinnerTree.o: MaxWinnerTree.cpp
	g++ -c MaxWinnerTree.cpp
clean:
	rm -rf *.o
