#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Returns the number of nodes with atleast one child
 * @tree: The tree to evaluate
 *
 * Return: The number of nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) + 1
			+ binary_tree_nodes(tree->right));
	}
	else if (tree->left != NULL)
	{
		return (binary_tree_nodes(tree->left) + 1);
	}
	else if (tree->right != NULL)
	{
		return (binary_tree_nodes(tree->right) + 1);
	}

	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));

}
