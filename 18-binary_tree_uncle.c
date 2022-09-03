#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node in binary tree
 * Return: sibling node, NULL otherwise.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int data;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->left ||
		!node->parent->parent->right)
		return (NULL);

	data = node->parent->n;

	if (node->parent->parent->left->n == data)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}

