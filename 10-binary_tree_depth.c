#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - Depth of a binary tree
 * @tree: pointer to the node
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t l_depth = 0;

		if (tree->parent)
		{
			l_depth = 1 + binary_tree_depth(tree->parent);
		}
		else
			l_depth = 0;
		return (l_depth);
	}
}
