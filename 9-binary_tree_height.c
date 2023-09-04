#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to root node
 *Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0;
	size_t left_h = 0;

	if (tree)
	{
		if (tree->right)
		{
			right_h += 1 + binary_tree_height(tree->right);
		}

		if (tree->left)
		{
			left_h += 1 + binary_tree_height(tree->left);
		}

		if (right_h > left_h)
		{
			return (right_h);
		}
		else
		{
			return (left_h);
		}
	}

	return (0);
}
