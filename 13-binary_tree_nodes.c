#include "binary_trees.h"

/**
 * binary_tree_nodes - find the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		num_nodes = 1;

	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);

	return (num_nodes);
}
