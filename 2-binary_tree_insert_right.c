#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;
	binary_tree_t *aux_pointer;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_right_node = calloc(1, sizeof(binary_tree_t));
	if (new_right_node == NULL)
	{
		return (NULL);
	}
	new_right_node->n = value;
	new_right_node->parent = parent;
	if (parent->right != NULL)
	{
		aux_pointer = parent->right;
		parent->right = new_right_node;
		new_right_node->right = aux_pointer;
		aux_pointer->parent = new_right_node;
	}
	else
	{
		parent->right = new_right_node;
	}
	return (new_right_node);
}
