#include <iostream>
#include <stack>
#include<stdlib.h>
#include<stdio.h>
#include <string>
#include <algorithm>

using namespace std;
typedef struct node
{
    char data;
    struct node* right;
    struct node* left;
} node;


void insert(node** tree, char val)
{
    node *temp = NULL;
    if(!(*tree)) // node is empty
    {
        temp = (node*)malloc(sizeof(node)); // allocate the space of a node
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void construct(node **tree, string str, int n)
{
    for(int i = 0; i < n; i++)
    {
        insert(&(*tree), str[i]);
    }
}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%c",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

int main()
{
    node *root = NULL;
    char ch;
    string str;
    while (  (ch = getchar()) )
    {
        if(ch == '$')
        {
            reverse(str.begin(), str.end());
            construct(&root, str, str.size());
            print_preorder(root);
            printf("\n");
            deltree(root);
            break;
        }
        if(ch == '*')
        {
            reverse(str.begin(), str.end());
            construct(&root, str, str.size());
            print_preorder(root);
            printf("\n");
            deltree(root);
            str.clear();
            root = NULL;
            continue;
        }
        if(ch >= 'A' && ch <= 'Z')
        {
            str.push_back(ch);
        }
    }
    return 0;
}
