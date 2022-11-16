#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a node
 * @tree: the entirely binary tree
 */

int binary_tree_is_full(const binary_tree_t *tree);
{
	if (tree == NULL)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (1);

	if ((tree->left) && (tree->right))
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
}
