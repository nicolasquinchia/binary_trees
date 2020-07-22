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

	new_tree_node = malloc(sizeof(binary_tree_t));
	if (new_tree_node == NULL)
	{
		return (NULL);
	}
	if (parent == NULL) /* It is because is ROOT NODE */
	{
		new_tree_node->parent = parent;
		new_tree_node->n = value;
		return (new_tree_node);
	}
	else /* Have to check the values of the nodes */
	{
		if (value > parent->n && parent->right == NULL)
		{
			new_tree_node->parent = parent;
			new_tree_node->n = value;
			parent->right = new_tree_node;
		}
		else if (value < parent->n && parent->left == NULL)
		{
			new_tree_node->parent = parent;
			new_tree_node->n = value;
			parent->left = new_tree_node;
		}
	}
	return (new_tree_node);
}
