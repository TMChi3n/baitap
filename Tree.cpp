#include <iostream>
using namespace std;

struct BST{
	int data;
	BST *pLeft, *pRight;
};
BST *root;


void taoBST(){
	root = NULL;
}


BST *tao(int data){
	BST* node = new BST;
	if(node==NULL) exit(1);
	else{
		node->data = data;
		node->pLeft = NULL;
		node->pRight = NULL;
	}
	return node;
}


BST *nhap(BST *node, int value){
	if(node!=NULL)
	{
		if(node->data == value)	return node;
		else 
		if(node->data > value)	node->pLeft = nhap(node->pLeft, value);
	    else
		{
			node->pRight = nhap(node->pRight, value);
		}
	}
	else
	{
		node = tao(value);
	}
	return node;
}

void xuat(BST *root){
	if(root!=NULL){
		if(root!=NULL){
			cout<<root->data<<" ";
		}
		xuat(root->pLeft);
		xuat(root->pRight);
	}
}


BST *timX(BST *root, int x){
	BST *p=root;
	while(p != NULL){
		if(p->data == x){
			return p;
		}else if(p->data > x){
			p = p->pLeft;
		}else{
			p = p->pRight;
		}
	}
	return NULL;
}


int main()
{
	int x;
	cout<<"Tim x: ";
	cin>>x;
	taoBST();
	root = nhap(root, 1);
	root = nhap(root, 2);
	root = nhap(root, 3);
	root = nhap(root, 4);
	root = nhap(root, 5);
	root = nhap(root, 6);
	root = nhap(root, 7);
	root = nhap(root, 8);
	root = nhap(root, 9);
	root = nhap(root, 10);
	cout<< "Day la: ";
    xuat(root);
	if(timX(root,x)!= NULL ) cout<< "\n"<< "Tim duoc " << x;
	else  cout<< "\n"<< "Khong tim duoc " << x;
}
