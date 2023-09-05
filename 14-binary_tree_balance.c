#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, balance_factor = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	balance_factor = height_left - height_right;
	return (balance_factor);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree : a pointer to the root node of the binary tree
 * Return: tree height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
