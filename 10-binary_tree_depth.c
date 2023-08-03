#include "binary_trees.h"

/**
* binary_tree_depth - depth of binary tree
* @tree: node to measure the depth pointer
 * Return: returns 0 if null
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
