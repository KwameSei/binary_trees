#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_nodes - sums up nodes in the tree
 * @tree: the entirely binary tree
 *
 * Return: nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		node += 1;
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
