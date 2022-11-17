#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_sibling - Checking if binary a node is a sibling
 * @node: node
 *
 * Return: node to parent
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - Checking if binary a node is a sibling
 * @node: node
 *
 * Return: NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
		return (binary_tree_sibling(node->parent));
	else
		return (NULL);
}
