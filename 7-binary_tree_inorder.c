#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through binary tree using in order traversal
 * @tree: binary tree to traverse
 * @func: function to print contents of tree
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);

	func(tree->n);

	binary_tree_preorder(tree->right, func);
}