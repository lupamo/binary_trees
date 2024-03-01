#include "binary_trees.h"
/**
 * binary_tree_is_full - function to check if binary tree is full
 * @tree: a node pointer
 * Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
