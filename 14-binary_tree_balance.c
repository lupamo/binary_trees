#include "binary_trees.h"

/**
 * max - returns the maximam value
 * @a: value 1
 * @b: value 2
 * Return: max value
*/
int max(int a, int b)
{
	return (a > b) ? a : b;
}

/**
 * height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_balance - function to measure balance factor of a binary tree
 * @tree: root node pointer
 * Return: 0 if root node is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (height(tree->left) - height(tree->right));
}
