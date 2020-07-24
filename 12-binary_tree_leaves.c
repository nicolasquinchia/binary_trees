#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Leaves of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_counter;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	l_counter = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (l_counter);
}
