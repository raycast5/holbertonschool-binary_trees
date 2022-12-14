#include "binary_trees.h"

/**
 * binary_tree_size - finds size of binary tree
 * @tree: binary tree
 * Return: size of binary tree (number of nodes)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left)
	+ binary_tree_size(tree->right) + 1);
}
