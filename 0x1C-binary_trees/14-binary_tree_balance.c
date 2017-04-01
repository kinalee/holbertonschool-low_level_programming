#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size of
 * Return: size of the given tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

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
