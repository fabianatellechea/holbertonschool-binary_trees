#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to be check
 * Return: 1 if it is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	if ((height_left == height_right) && (size_left == size_right)
		&& (binary_tree_is_full(tree)))
		return (1);

	return (0);
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

#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if it isn't full, 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return(binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

/**
 *  binary_tree_size - measures the size of a binary tree
 *  @tree: pointer to the root node of the tree to measure the size
 *  Return: size of the tree or 0 if it is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
