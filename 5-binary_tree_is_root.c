#include "binary_trees.h"

/**
 * binary_tree_is_root - Checking to see if a node is a root
 * @node: a node
 *
 * Return: 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	// Checking if root point to NULL
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
