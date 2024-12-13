#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserta un nodo como hijo derecho de otro nodo.
 * @parent: Puntero al nodo en el que se debe insertar el hijo derecho.
 * @value: El valor que tendrá el nuevo nodo.
 *
 * Return:Puntero al nodo creado o NULL en caso de error o si el padre es NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	parent->right->parent = new_node;
	}

	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
