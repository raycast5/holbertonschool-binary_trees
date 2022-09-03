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
 * binary_tree_is_perfect - check if given tree is perfect
 * @tree: tree to be checked'
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rheight, lheight, flag1, flag2;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	rheight = binary_tree_height(tree->right);
	lheight = binary_tree_height(tree->left);
	if (rheight != lheight)
		return (0);

	if (tree->left && tree->right)
	{
		flag1 = binary_tree_is_perfect(tree->left)
		flag2 =  binary_tree_is_perfect(tree->right);
	}
	if (flag1 == 1 && flag2 == 1)
		return (1);

return (0);
}
