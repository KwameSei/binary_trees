#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - Difference between left and right subtree nodes
 * @tree: pointer to the node
 *
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
/*
*		l_size = tree->left ? binary_tree_size(tree->left) : 0;
*		r_size = tree->right ? binary_tree_size(tree->right) : 0;
*/
		int left_height = 0, right_height = 0;

		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);

		return (left_height - right_height);
	}
	return (0);
}
