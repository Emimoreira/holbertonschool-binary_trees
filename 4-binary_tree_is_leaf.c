#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifica si un nodo es una hoja.
 * @node: Puntero al nodo a verificar.
 *
 * Return: 1 si el nodo es una hoja, 0 en caso contrario.
 * Si el nodo es NULL, retorna 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0)

	if (node->left == NULL && node->right == NULL)
	return (1);

	return (0);
}
