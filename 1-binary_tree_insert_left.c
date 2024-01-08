#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if
 * parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

if (!parent)
return (NULL);

new_node = malloc(sizeof(binary_tree_t));

if (!new_node)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;

if (parent->left)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
else
new_node->left = NULL;

parent->left = new_node;

return (new_node);
}
