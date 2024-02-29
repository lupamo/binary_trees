#include "binary_trees.h"
/**
 * binary_tree_is_root - Function checks if node is a root
 * @node: pointer to the node we are checking
 *
 * Return: If node is a root - 1.
 *         else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->left == NULL || node->right == NULL)
		return (0);

	return (1);
}
