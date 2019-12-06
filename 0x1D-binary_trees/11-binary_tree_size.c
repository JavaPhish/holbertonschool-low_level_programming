#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size -  Gets the size of a binary tree
 * @tree: The tree to get the size from
 *
 * Return: The size of the given b-tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((size_t)(binary_tree_size(tree->left) + 1
		+ binary_tree_size(tree->right)));
}
