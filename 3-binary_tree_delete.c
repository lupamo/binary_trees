#include "binary_trees.h"
/**
 * binary_tree_delete - Function to delete a whole tee
 * @tree: pointer to the root node of tree we want to remove
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
