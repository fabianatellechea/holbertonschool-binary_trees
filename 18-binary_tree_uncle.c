#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or null if it doesn't exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node, or null if it doesn't exist
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *aux = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	aux = node->parent;

	if (aux->right == node)
	{
		if (aux->left != NULL)
			return (aux->left);
		else
			return (NULL);
	}
	else if (aux->left == node)
	{
		if (aux->right != NULL)
			return (aux->right);
		else
			return (NULL);
	}
	return (NULL);
}
