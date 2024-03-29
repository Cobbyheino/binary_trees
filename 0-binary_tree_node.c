#include "binary_trees.h"

/**
 * binary_tree_node - Cr8 binary tree node.
 * @parent: A p* to parent of the node.
 * @value: value to put in a node.
 *
 * Return:  error occur - NULL.
 *         Othawise - a ptr to the node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
