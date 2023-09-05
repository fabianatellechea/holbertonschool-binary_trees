#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
	{
		num_nodes = left + right;
		return (num_nodes + 1);
	}
	return (0);
}
