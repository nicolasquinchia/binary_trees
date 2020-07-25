#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the uncle node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *pointer_f, *pointer_s;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)(first));
	}
	pointer_f = first;
	while (pointer_f != NULL)
	{
		pointer_s = second;
		while (pointer_s != NULL)
		{
			if (pointer_f == pointer_s)
			{
				return ((binary_tree_t *)(pointer_f));
			}
			pointer_s = pointer_s->parent;
		}
		pointer_f = pointer_f->parent;
	}
	return (NULL);
}
