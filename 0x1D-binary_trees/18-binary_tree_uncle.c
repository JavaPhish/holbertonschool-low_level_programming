#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_uncle - finds the uncle of a binary tree
 * @node: The node to find the uncle off
 *
 * Return: The uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int tail = -1;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	node = node->parent;

	tail = node->n;

	if (node->parent == NULL)
		return (NULL);

	node = node->parent;

	if (node->right->n == tail)
	{
		if (node->left == NULL)
			return (NULL);
		return (node->left);
	}

	if (node->left->n == tail)
	{
		if (node->right == NULL)
			return (NULL);

		return (node->right);
	}

	return (NULL);

}
