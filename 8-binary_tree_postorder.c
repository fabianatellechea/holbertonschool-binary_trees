#include "binary_trees.h"
/**
 *binary_tree_postorder - goes through a binary tree using post-order traversal
 *@tree: pointer to the root node to traverse it
 *@func: pointer to a func to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;

	}

	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}