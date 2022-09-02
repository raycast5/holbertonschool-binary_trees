#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of given node on binary tree
 * @tree:  node from binary tree
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
