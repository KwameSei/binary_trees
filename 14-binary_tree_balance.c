#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_delete - deletes a node
 * @tree: the entirely binary tree
 */

int binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree);
{
	if (tree)
	{

		int l-height = 0, r_height = 0;
		
		if (tree->left)
			l_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);
		return (l_height - r_height)
	}
	return (0)
}
