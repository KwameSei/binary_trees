#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - Checking if binary tree is full
 * @tree: pointer to the node
 *
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
/*
*		l_size = tree->left ? binary_tree_size(tree->left) : 0;
*		r_size = tree->right ? binary_tree_size(tree->right) : 0;
*/
		if ((tree->left == NULL) && (tree->right == NULL))
			return (1);

		if ((tree->left) && (tree->right))
		{
			return (binary_tree_is_full(tree->left)
					&& binary_tree_is_full(tree->right));
		}
		else
			return (0);
	}
	return (0);
}
