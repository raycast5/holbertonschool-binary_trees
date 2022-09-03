#include "binary_trees.h"
/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: a node in a binary tree
 * Return: height of tree, NULL if it fails
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lheight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rheight = binary_tree_height(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}

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
		lheight = binary_tree_height(tree->left) + 1;
	else
		lheight = 0;
	if (tree->right)
		rheight = binary_tree_height(tree->right) + 1;
	else
		rheight = 0;

	return (lheight - rheight);
}

