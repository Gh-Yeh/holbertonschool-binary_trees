#include "binary_trees.h"
size_t binary_tree_lvl(const binary_tree_t *tree);
/**
 * binary_tree_lvl - calc the depth of a node in a binary tree
 * @tree: pointer to the tree root
 * Return: 0 if tree is NULL
 */
size_t binary_tree_lvl(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_lvl(tree->parent);
	return (depth);
}
/**
 *binary_tree_depth - calc the depth of a binary tree
 *@tree: pointer to tree
 *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_lvl(tree) - 1);
}
