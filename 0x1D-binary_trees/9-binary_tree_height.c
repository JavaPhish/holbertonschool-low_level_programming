#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - Gets the height of a binary tree
 * @tree: The tree to get the height of
 *
 * Return: Height of the binary tree, 6' on tinder
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_tr, right_tr;

	if (tree == NULL)
		return (-1);

	left_tr = (int)binary_tree_height(tree->left);
	right_tr = (int)binary_tree_height(tree->right);

	if (left_tr > right_tr)
		return ((size_t)(1 + left_tr));

	return ((size_t)(1 + right_tr));
}
