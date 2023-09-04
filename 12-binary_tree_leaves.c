#include "binary_trees.h"
/**
 *binary_tree_leaves - counts leaves of tree
 *@tree: pointer to root node
 *Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
