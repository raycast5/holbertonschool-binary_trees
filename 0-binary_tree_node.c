#include "binary_trees.h"

/**
 * binary_tree_t - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: value of the new node
 * Return: pointer to new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (!parent)
	{
		parent = new_node;
		return (new_node);
	else
	{
		if (parent->left->value > value)
		{
			parent->left = new_node;
			return (new_node);
		}
		else
		{
			parent->right = new_node;
			return (new_node);
		}
	}
return (NULL);
}
