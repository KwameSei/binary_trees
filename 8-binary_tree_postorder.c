#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - height of a binary tree
 * @tree: pointer to the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  else
    {
      size_t l_Height = 0, r_Height = 0;
      l_Height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
      r_Height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
      if (l_Height >= r_Height)
	return (l_Height);
      else
	return (r_Height);
    }
}

/*
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t l_Height = 0, r_Height = 0;

		if (tree->left)
		{
			l_Height = 1 + binary_tree_height(tree->left);
		}
		else
		{
			l_Height = 0
		}

		if (tree->right)
		{
			r_Height = 1 + binary_tree_height(tree->right);
		}
		else
		{
			r_Height = 0
		}

		if (l_Height >= r_Height)
			return (l_Height);
		else
			return (r_Height);
	}
}
*/
