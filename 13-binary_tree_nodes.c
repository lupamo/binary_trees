#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the node with atleast 1 child
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
