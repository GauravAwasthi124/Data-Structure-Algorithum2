#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *newNode(int data)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct Node *insert(struct Node *root,int data)
{
    if (root==NULL)
    {
        return newNode(data);
    }
    if (data<root->data)
    {
        root->left=insert(root->left,data);
    }else if (data>root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(struct Node *root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}
void preorder(struct Node *root)
{
    if (root!=NULL)
    {
        printf("%d ",root->data);
        inorder(root->left);
        inorder(root->right);
    }
    
}
void postorder(struct Node *root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        printf("%d ",root->data);
    }
    
}
int main()
{
    struct Node *root=NULL;
    int n,data;
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("Enter the data\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&data);
        root=insert(root,data);
    }
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");
    return 0;
}