#include "binary_trees.h"
/**
 * binary_tree_height - measures the binary tree height
 *@tree: pointer to the root node
 * Return: returns 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - measures the balance factor
 *@tree: pointer to the root node
 * Return: returns 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
