#include "binary_trees.h"

/**
 * binary_tree_inorder - Recorre el árbol en orde y aplica una funció
 * @tree: Puntero a la raíz del árbol a recorrer.
 * @func: Puntero a la función que se debe aplicar a cada nodo.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
