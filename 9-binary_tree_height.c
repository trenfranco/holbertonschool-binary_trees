#include "binary_trees.h"

/**
 * binary_tree_height - height
 * @tree: pointer to the root node of the tree
 * Return: height or if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));
}
