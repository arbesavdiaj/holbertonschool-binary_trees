#include "binary_trees.h"
/**
 * power - function that calculates the power
 * @base : base
 * @exponent: exponent
 * Return: base to the power of exponenet
 */
int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = exponent; i > 0; i--)
	{
		result = result * base;
	}
	return (result);
}
/**
 * binary_tree_height - function that finds the height of a binary tree
 * @tree: tree
 * Return: height of the tree where root is level 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);
	else
	{
		size_t left_side;
		size_t right_side;

		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		if (left_side > right_side)
		{
			return (left_side + 1);

		}
		else
			return (right_side + 1);
	}
}
/**
 * binary_tree_size - function that finds the size of a binary tree
 * @tree: tree
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	else
	{
		size_t leftSize = binary_tree_size(tree->left);
		size_t rightSize = binary_tree_size(tree->right);

		return (leftSize + rightSize + 1);
	}
}
/**
 *binary_tree_is_perfect - function that checks ifa binary tree is perfect
 *@tree: tree node pointer
 *Return: 0 if its not perfect and 1 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size;
	size_t height;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree) + 1;

	if ((power(2, height) - 1) == (int) size)
		return (1);
	else
		return (0);

}
