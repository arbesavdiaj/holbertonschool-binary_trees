#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 * Return: If node is NULL, the parent is NULL, the grandparent is NULL,
 * or node has no uncle, return NULL. Otherwise, return a pointer to the
 * uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->n > node->parent->parent->n)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
