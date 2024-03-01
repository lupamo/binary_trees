#include "binary_trees.h"

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
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t l;
	size_t r;

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return ((l > r ? l : r) + 1);
}
