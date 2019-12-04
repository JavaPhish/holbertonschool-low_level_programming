#include "binary_trees.h"

/**
 * binary_tree_preorder - Outputs a b-tree using preorder traversal, nerd.
 * @tree: The tree to output
 * @func: The function to use to output
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(*func)(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, (*func));

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, (*func));
}
