#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node
 * @parent: The parent node to attach to
 * @value: The value of the node
 *
 * Return: The new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent != NULL)
		new_node->parent = parent;

	new_node->n = value;

	return (new_node);
}
