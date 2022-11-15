#include "binary_trees.h"
#include "stdlib.h"
/**
 * binary_tree_node - create a node
 * @parent: pointer to parent
 * @value: node data
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->n = value;

	new->parent = parent;

	return (new);
}
