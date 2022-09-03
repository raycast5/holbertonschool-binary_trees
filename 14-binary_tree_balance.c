#include "binary_trees.h"

/**
 * binary_tree_balance - finds balance factor of a binary tree
 * @tree: a node in a binary tree
 * Return: balance factor, 0 if it fails
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lheight = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		rheight = binary_tree_balance(tree->right) + 1;

	return (lheight - rheight);
}

