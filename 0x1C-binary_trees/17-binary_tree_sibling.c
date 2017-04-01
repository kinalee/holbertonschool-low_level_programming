#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling node
 * @tree: a pointer to the root node of the tree
 * Return: pointer to sibling node or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right != NULL && node->parent->left != NULL)
	{
		if (node->parent->left->n == node->n)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
}
