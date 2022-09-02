#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a binary tree node to the left
 * @parent: a pointer to the parent node of the node to create
 * @value: value of the new node
 * Return: pointer to new node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (!parent->left)
	{
		parent->left = new_node;
		return (new_node);
	}
	else
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		parent->left = new_node;
	}
return (NULL);
}
