#include "binary_trees.h"

/**
 * binary_tree_size - function that measures binary tree depth
 * @tree: pointer to the root node
 * Return: depth size if no tree return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t level;

	level = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		level = 1 + binary_tree_size(tree->parent);
	}

	return (level);
}
