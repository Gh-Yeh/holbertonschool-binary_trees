#include "binary_trees.h"

/**
 * binary_tree_height - calc the height of a binary tree
 * @tree: pointer to root
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_path, l_right;

	if (tree == NULL)
		return (0);
	l_path = binary_tree_height(tree->left);
	l_right = binary_tree_height(tree->right);
	if (l_path >= l_right)
		return (1 + l_path);
	return (1 + l_right);
}

/**
 * binary_tree_balance - calc the balance factor of a binary tree
 * @tree: pointer to root
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_path, l_right;

	if (tree == NULL)
		return (0);
	l_path = binary_tree_height(tree->left);
	l_right = binary_tree_height(tree->right);
	return (l_path - l_right);
}
