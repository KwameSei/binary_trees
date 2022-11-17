#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - height of a binary tree
 * @tree: pointer to the node
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
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


/**
 * power - Exponentials
 * @base: base number
 * @exp: base to the power of a number
 * Return: power
 */
int power(int base, int exp)
{
	int power = 1, i = 1;

	for (i = 1; i <= exp; i++)
	{
		power = power * base;
	}
	return (power);
}


/**
 * binary_tree_is_perfect - Checking if binary tree is perfect
 * @tree: pointer to the node
 *
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = 0, height = 0, nodes = 0;

	if (tree)
	{

		height = binary_tree_height(tree) + 1;
		size = binary_tree_size(tree);
		nodes = power(2, height);

		if (size == (nodes - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
