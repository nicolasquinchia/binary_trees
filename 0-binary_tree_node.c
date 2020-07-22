#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node;

	if (!value)
	{
		return NULL;
	}
	new_tree_node = malloc(sizeof(binary_tree_t));
	if (new_tree_node == NULL)
	{
		return (NULL);
	}
	new_tree_node->parent = parent;
	new_tree_node->n = value;
	return (new_tree_node);
}
