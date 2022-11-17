#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - number of leaves in a binary tree
 * @tree: pointer to the node
 *
 * Return: nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
/*
*		l_size = tree->left ? binary_tree_size(tree->left) : 0;
*		r_size = tree->right ? binary_tree_size(tree->right) : 0;
*/
		if (tree->left || tree->right)
			nodes += 1;
		else
			nodes += 0;

		if (tree->right)
			nodes += binary_tree_nodes(tree->right);

		if (tree->left)
			nodes += binary_tree_nodes(tree->left);
	}
	return (nodes);
}
