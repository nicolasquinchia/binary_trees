#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int sub_left, sub_right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	sub_left = binary_tree_is_full(tree->left);
	sub_right = binary_tree_is_full(tree->right);
	return (sub_right * sub_left);
}
