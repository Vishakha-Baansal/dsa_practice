#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*right;
    Node*left;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* builttree(){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    if(data==-1)
    return NULL;

    Node*root=new Node(data);
    cout<<"Enter the left child data of"<<data<<endl;
    root->left=builttree();

    cout<<"Enter the right child data of "<<data<<endl;
    root->right=builttree();
    return root;
}
int main()

{
    Node*root=NULL;
    root=builttree();

}