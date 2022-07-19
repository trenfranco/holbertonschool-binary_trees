#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent
 * @value: value
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent->left)
	{
		parent->left = new;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		old = parent->left;
		parent->left = new;
		new->n = value;
		new->left = old;
		new->right = NULL;
		new->parent = parent;
		old->parent = new;
	}

	return (new);
}
