#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node on the left
 * @parent: The node to insert to
 * @value: The value of the new node
 *
 * Return: The new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node;

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent);
	}

	old_node = parent->left;
	parent->left = binary_tree_node(parent, value);
	old_node->parent = parent->left;
	parent->left->left = old_node;

	return (parent);
}
