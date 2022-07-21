#include "binary_trees.h"

/**
 * binary_tree_height - measures tree height
 * @tree: tree
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	
	if (!tree->parent && !tree->left && !tree->right)
		return (1);

	while (tree->left || tree->right)
	{
		if (!tree->left)
		{
			tree = tree->right;
			i++;
			continue;
		}
		tree = tree->left;
		i++;
	}
	return (i);
}
