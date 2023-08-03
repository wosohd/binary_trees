#include "binary_trees.h"

/**
 * bst_search - function searches for a value in a binary search tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search for in the BST
 *
 * Return: a pointer to the node cotaining value
 *         Otherwise return NULL if tree is NULL or value not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
