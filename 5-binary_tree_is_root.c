#include "binary_trees.h"

/**
 * binary_tree_is_root - Verifica si un nodo es la raíz del árbol.
 * @node: Puntero al nodo a verificar.
 *
 * Return: 1 si el nodo es la raíz, 0 en caso contrario.
 * Si el nodo es NULL, retorna 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
	return (1);

	return (0);
}
