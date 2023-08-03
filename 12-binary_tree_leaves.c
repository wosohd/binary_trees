#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a node is a leaf.
 *@node: is a pointer to the checker node
* Return: returns 0 if null
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - leaves number
* @tree: node to measure the depth pointer
 * Return: returns 0 if null
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
}
