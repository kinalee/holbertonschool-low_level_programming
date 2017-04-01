#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: a pointer to the node to measure the depth of
 * Return: returns the depth of the given node or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (!node)
		return (0);

	while (node->parent)
	{
		node = node->parent;
		++depth;
	}
	return (depth);
}
