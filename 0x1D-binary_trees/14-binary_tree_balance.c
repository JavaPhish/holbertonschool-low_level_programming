#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - makes binary trees feel self concious
 * @tree: The tree to make want to go to the gym
 *
 * Return: The "balance" of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	right = (int)binary_tree_height(tree->right);
	left = (int)binary_tree_height(tree->left);

	if (right == left)
		return (0);
	if (right > left)
		return (right - left);
	if (left > right)
		return (left - right);

	return (0);
}

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
