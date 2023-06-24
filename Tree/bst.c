#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Node* insert_node(Node* root, int data) {
    if (root == NULL) {
        return create_node(data);
    } else {
        if (data < root->data) {
            root->left = insert_node(root->left, data);
        } else if (data > root->data) {
            root->right = insert_node(root->right, data);
        }
    }
    return root;
}

Node* find_min_value_node(Node* node) {
    Node* current_node = node;
    while (current_node->left != NULL) {
        current_node = current_node->left;
    }
    return current_node;
}

Node* delete_node(Node* root, int data) {
    if (root == NULL) {
        return root;
    } else if (data < root->data) {
        root->left = delete_node(root->left, data);
    } else if (data > root->data) {
        root->right = delete_node(root->right, data);
    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        } else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            free(temp);
        } else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            free(temp);
        } else {
            Node* temp = find_min_value_node(root->right);
            root->data = temp->data;
            root->right = delete_node(root->right, temp->data);
        }
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    Node* root = NULL;
    int n, data,select;

    // printf("Enter the number of nodes: ");
    // scanf("%d", &n);

    // printf("Enter %d data values: ", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &data);
    //     root = insert_node(root, data);
    // }
    
    while (1)
    {
        printf("\nPress 1 for Create BST\nPress 2 for insert a New Node\nPress 3 for Delete a Node from a BST\n");
        printf("Press 4 for Preorder of BST\nPress 5 for Inorder of BST\nPress 6 for Postorder of BST\n");
        printf("Press 7 for Exit\n");
        printf("Enter your Choice\n");
        scanf("%d",&select);
        switch (select)
        {
        case 1:
        printf("Enter the number of nodes: ");
        scanf("%d", &n);
        printf("Enter %d data values: ", n);
        for (int i = 0; i < n; i++) 
        {
        scanf("%d", &data);
        root = insert_node(root, data);
        }
        break;
        case 2:
        printf("Enter the value of the new node you want to insert: ");
        scanf("%d", &data);
        root = insert_node(root, data);
        break;
        case 3:
        printf("Enter the value of the node you want to delete: ");
        scanf("%d", &data);
        root = delete_node(root, data);
        break;
        case 4:
            printf("Preorder traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 5:
            printf("Inorder traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 6:
            printf("Postorder traversal: ");
            postorder(root);
            printf("\n");
        case 7:
            printf("Existing from loop");
            break;
        }
    }
    
    


    // printf("Preorder traversal: ");
    // preorder(root);
    // printf("\n");

    // printf("Postorder traversal: ");
    // postorder(root);
    // printf("\n");


    // printf("Inorder traversal: ");
    // inorder(root);
    // printf("\n");

    // printf("Preorder traversal: ");
    // preorder(root);
    // printf("\n");

    // printf("Postorder traversal: ");
    // postorder(root);
    // printf("\n");

    // printf("Inorder traversal: ");
    // inorder(root);
    // printf("\n");

    // printf("Preorder traversal: ");
    // preorder(root);
    // printf("\n");

    // printf("Postorder traversal: ");
    // postorder(root);
    // printf("\n");
    // return 0;
}