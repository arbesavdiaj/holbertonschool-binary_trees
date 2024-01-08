#include "binary_trees.h"
#include <stdlib.h>

// Write a function that creates a binary tree node

// Where parent is a pointer to the parent node of the node to create
// And value is the value to put in the new node
// When created, a node does not have any child
// Your function must return a pointer to the new node, or NULL on failure

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    new_node->parent = parent;
    new_node->n = value;

    return (new_node);
}