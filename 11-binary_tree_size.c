#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_size - size of a binary tree
 * @tree: pointer to the node
 *
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t l_size = 0, r_size = 0;
/*
*		l_size = tree->left ? binary_tree_size(tree->left) : 0;
*		r_size = tree->right ? binary_tree_size(tree->right) : 0;
*/
		if (tree->left)
		{
			l_size = binary_tree_size(tree->left);
		}
		else
			l_size = 0;

		if (tree->right)
		{
			r_size = binary_tree_size(tree->right);
		}
		else
			r_size = 0;

		return (l_size + r_size + 1);
	}
}
