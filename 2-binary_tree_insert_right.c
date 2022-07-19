#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent
 * @value: value
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent->right)
	{
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		old = parent->right;
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->right = old;
		new->parent = parent;
		old->parent = new;
	}

	return (new);
}
