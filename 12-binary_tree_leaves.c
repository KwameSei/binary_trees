#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - number of leaves in a binary tree
 * @tree: pointer to the node
 *
 * Return: size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	{
		size_t left_leaf = 0, right_leaf = 0;

		if ((tree->left == NULL) && (tree->right == NULL))
			return (1);
/*
*		l_size = tree->left ? binary_tree_size(tree->left) : 0;
*		r_size = tree->right ? binary_tree_size(tree->right) : 0;
*/
		if (tree->left)
		{
			left_leaf = binary_tree_leaves(tree->left);
		}
		else
			left_leaf = 0;

		if (tree->right)
		{
			right_leaf = binary_tree_leaves(tree->right);
		}
		else
			right_leaf = 0;

		return (left_leaf + right_leaf);
	}
}
