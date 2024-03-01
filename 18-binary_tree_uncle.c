#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds uncle of anode
 * @node: pointer to find the uncle
 * Return: NULL if node is NULL or Node has no Uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}