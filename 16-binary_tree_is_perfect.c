#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height -function to calculate the height of a binary tree
 * @tree: -points to the root of the tree
 * Return: (height)
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_edges = 0;
	size_t right_edges = 0;
	size_t height = 0;

	if (tree == NULL || (tree->left ==NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
			left_edges = binary_tree_height(tree->left);
	if (tree->right != NULL)
			right_edges = binary_tree_height(tree->right);
	if (left_edges > right_edges)
	{
		height = left_edges + 1;
		return (height);
	}
	else
	{
		height = right_edges + 1;
		return (height);
	}
}

/**
 * binary_tree_size -function to get the size of a binary tree
 * @tree: -points to the root of the tree
 * Retrun: (size)
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;
	size_t size;
	
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
			left_nodes = binary_tree_size(tree->left);
	if (tree->right != NULL)
			right_nodes = binary_tree_size(tree->right);
	size = left_nodes + right_nodes + 1;

	return (size);
}

/**
 * binary_tree_is_prfect - function to check whether a binary tree is perfect or not
 * @tree: -points to the root of the tree
 * Return: (1)
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree) + 1;

	if ((int)pow(2, height) - 1 == (int) size)
		return (1);
	else
		return (0);
}
