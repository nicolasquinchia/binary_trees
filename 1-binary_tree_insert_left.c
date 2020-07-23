#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;
	binary_tree_t *aux_pointer;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left_node = calloc(1, sizeof(binary_tree_t));
	if (new_left_node == NULL)
	{
		return (NULL);
	}
	new_left_node->n = value;
	new_left_node->parent = parent;
	if (parent->left != NULL)
	{
		aux_pointer = parent->left;
		parent->left = new_left_node;
		new_left_node->left = aux_pointer;
		aux_pointer->parent = new_left_node;
	}
	else
	{
		parent->left = new_left_node;
	}
	return (new_left_node);
}
