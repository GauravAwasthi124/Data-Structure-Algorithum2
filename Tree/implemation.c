#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root;
struct node *create();
void preorder(struct node *root);
void postorder(struct node *root);
void inorder(struct node *root);
int main()
{
    root=0;
    root=create();
    printf("Preorder sequence\n");
    preorder(root);
    printf("\nPostorder sequence\n");
    postorder(root);
    printf("\ninorder sequence\n");
    inorder(root);
    return 0;
}
struct node *create()
{
    int x;
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&x);
    if (x==-1)
    {
        return 0;
    }
    new->data=x;
    else if (root->data > x)
    {
    printf("Enter the left child of %d \n",x);
    new->left = create();
    }
    else{
        printf("Enter the right child of %d \n",x);
        new->right = create();
    }
    
    return new;
}
void preorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
    
}
void postorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    else
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
}
void inorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    else
    {
        preorder(root->left);
        printf("%d ",root->data);
        preorder(root->right);
    }
}