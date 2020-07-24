#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t levels_left;
	size_t levels_right;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	{
		return (0);
	}
	else
	{
		levels_left = binary_tree_height(tree->left);
		levels_right = binary_tree_height(tree->right);
		if (levels_left >= levels_right)
		{
			return (levels_left + 1);
		}
		else
		{
			return (levels_right + 1);
		}
	}
}
