#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the left side
 * @parent: pointer to the node to insert the right-child in parent
 * @value: the value to store in the new node
 * Return: pointer to node created or NULL if no parent node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}


	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
