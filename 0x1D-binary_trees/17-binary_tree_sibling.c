#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_sibling - Gets a sibling of a binary tree value
 * @node: The node to find the sibling of
 *
 * Return: The sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int tail = -1;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tail = node->n;
	node = node->parent;

	if (tail == node->right->n)
	{
		if (node->left == NULL)
			return (NULL);

		return (node->left);
	}

	if (tail == node->left->n)
	{
		if (node->right == NULL)
			return (NULL);

		return (node->right);
	}
	return (NULL);
}
