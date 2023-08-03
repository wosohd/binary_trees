#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the node sibling
 *@node: pointer to the node
 * Return: returns 0 if null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
/**
 * binary_tree_uncle - finfinds the uncle of a node.
 *@node: pointer to the uncle node
 * Return: pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
