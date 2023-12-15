//Program That Constructs Binary Search Tree, Uses Preorder Traversal, and Searches For Specific Character
#include <iostream>

using namespace std;

//TreeNode Structure
struct TreeNode {
	//Variable to Hold Character Information
	char info;
	//Pointers to Left and Right Children in Tree
	struct TreeNode* left;
	struct TreeNode* right;
};

//Function That Creates Nodes For Binary Tree 
struct TreeNode* InsertItem(struct TreeNode* item, char info) {
	//Instance of Tree Node Created
	struct TreeNode* newNode;

	//If Statement If Empty Put Value Into Current Location
	if (item == NULL) {
		//Memory Allocated For Tree
		newNode = new TreeNode;
		//Node Copies Information 
		newNode->info = info;
		//Left And Right Subtrees Empty
		newNode->left = NULL;
		newNode->right = NULL;
		
		//Item Pointer Now Value of Current Node
		item = newNode;

		//Return Current Node Information
		return item;
	}
	//Else if Item is Smaller Go to Left Subtree
	else if (info < item->info)
		//Recursive Call to Self to Compare Information For Correct Placement
		item->left = InsertItem(item->left, info);

	//Else if Item is Greater Go to Right Subtree
	else if (info > item->info)
		//Recursive Call to Self to Compare Information For Correct Placement
		item->right = InsertItem(item->right, info);

	//Return Current Node Information
	return item;
}

//Function To Print Preorder Traversal of Binary Tree
void PreOrderTraversal(struct TreeNode* item) {
	//If Statement to Print Tree as Long as Not Empty
	if (item != NULL) {
		//Print Node Information to Screen
		cout << item->info << " ";

		//Recursive Call to Self to Visit Left Subtree For Print
		PreOrderTraversal(item->left);

		//Recursive Call to Self to Visit Right Subtree For Print
		PreOrderTraversal(item->right);
	}
}

//Function That Searches Tree For Specified Value
struct TreeNode* SearchFunction(struct TreeNode* item, char info) {
	//If Statement If Node is Empty or Node Found
	if ((item == NULL) || (item->info == info))
		//Return That Information
		return item;
	
	//If Statement If Item is Less Than Node Search Left Side
	if (info < item->info)
		//Recursive Call to Self to Search Left
		return SearchFunction(item->left, info);

	//Else Statement If Item is Greater Than Node Search Right Side
	else {
		//Recursive Call to Self to Search Right
		return SearchFunction(item->right, info);
	}
}

int main() {
	//Instance of TreeNode Declaration and Initialization 
	struct TreeNode* ptr = NULL;

	//Insert Item Function Call and Node Value Sets
	ptr = InsertItem(ptr, 'J');
	ptr = InsertItem(ptr, 'A');
	ptr = InsertItem(ptr, 'B');
	ptr = InsertItem(ptr, 'X');
	ptr = InsertItem(ptr, 'C');
	ptr = InsertItem(ptr, 'Q');

	//Display Pre-Order Traversal Information
	cout << "Using Pre-Order Traversal, Our Binary Search Tree is: " << endl;

	//Pre-Order Traversal Function Call
	PreOrderTraversal(ptr);

	cout << endl;

	cout << "Is Element F Inside Tree? " << endl;


	//Search Function Call, If Statement Display If Element is in Tree
	if (SearchFunction(ptr, 'F'))
		cout << "F is Inside Tree! " << endl;
	//Else Statement to Display if Element is Not in Tree
	else
		cout << "I'm Sorry, F Was Not Present Inside Tree. " << endl;



	return 0;
}
