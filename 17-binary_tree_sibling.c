#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node in binary tree
 * Return: sibling node, NULL otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int data;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);

	data = node->n;

	if (node->parent->left->n == data)
		return (node->parent->right);
	else
		return (node->parent->left);
}

