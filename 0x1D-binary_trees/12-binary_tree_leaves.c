#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the number of leaves in a b-tree
 * @tree:  The tree to count the leaves from
 *
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right)
		return (1);
	else
		return binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);

}
