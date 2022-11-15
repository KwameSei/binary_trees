#include "binary_trees.h"
#include "stdlib.h"
/**
 * binary_tree_insert_right - create a node
 * @parent: pointer to parent
 * @value: node data
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->n = value;

	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;
	}

	return (new);
}
