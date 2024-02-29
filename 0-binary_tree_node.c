#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a node of a binary
 * @parent: parent node of the binary tree
 * @value: value of the binary tree
 * Return: a pointer to parent node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Failed to allocate memmory");
		return NULL;
	}	
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return (new_node);	
}