#include "binary_trees.h"

/**
 * binary_tree_height_int -  measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of a binary tree int
 */
int binary_tree_height_int(const binary_tree_t *tree)
{
	int levels_left;
	int levels_right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		levels_left = binary_tree_height_int(tree->left);
		levels_right = binary_tree_height_int(tree->right);
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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int sub_left;
	int sub_right;

	if (tree == NULL)
	{
		return (0);
	}
	sub_left = binary_tree_height_int(tree->left);
	sub_right = binary_tree_height_int(tree->right);
	return (sub_left - sub_right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 is is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sub_left, sub_right;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_balance(tree) == 0)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		sub_left = binary_tree_is_perfect(tree->left);
		sub_right = binary_tree_is_perfect(tree->right);
		return (sub_left * sub_right);
	}
	return (0);
}
