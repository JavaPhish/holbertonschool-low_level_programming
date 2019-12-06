#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - returns if a binary tree is "full" (google it)
 * @tree: The tree to evaluate
 *
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	return (0);
}
