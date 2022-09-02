#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if given node is a leaf
 * @node: node to be checked
 * Return: 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left)
		return (0);
	if (node->right)
		return (0);
return (1);
}
