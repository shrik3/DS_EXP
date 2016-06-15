#include <stdio.h>
#include <stdlib.h>


struct binary_tree {
    int data    ;   // Data area
    struct binary_tree * left;
    struct binary_tree * right;
}binary_tree;

typedef struct binary_tree node;


void insert(node ** tree, int val) {
    node * temp = NULL;
    if(!(*tree)) {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return ;
    }

    if (val < (*tree)->data) {
        insert(&(*tree)->left,val);
    }else if (val > (*tree)->data) {
        insert(&(*tree)->right,val);
    }
}

void deltree(node * tree) {
    if(tree) {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

void print_preorder(node * tree) {
    if(tree) {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}

void print_inorder(node * tree) {
    if(tree) {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree) {
    if(tree) {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

int main(void) {
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    int j;
    for(j = 0 ; j<100;j++){
    int i;
    scanf("%d", &i);
    if (i != -1) {
        insert(&root, i);
    } else { break; }
}
    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Order Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);


    /* Deleting all nodes of tree */
    deltree(root);
}