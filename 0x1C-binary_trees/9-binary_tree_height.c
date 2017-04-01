#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height of
 * Return: height of a tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	i = j = 0;
	if (tree->left)
		i = binary_tree_height(tree->left) + 1;
	if (tree->right)
		j = binary_tree_height(tree->right) + 1;


	if (i > j)
		return (i);
	else
		return (j);
}
