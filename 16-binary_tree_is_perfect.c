#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un árbol binario
 * @tree: Puntero al nodo raíz del árbol
 *
 * Return: Altura del árbol, 0 si el árbol es NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0, right_height = 0;

    if (tree == NULL)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * is_perfect_recursive - Función auxiliar para verificar si el árbol es perfecto
 * @tree: Puntero al nodo raíz del árbol
 * @depth: La profundidad del nodo actual
 * @level: La profundidad del primer nodo hoja
 *
 * Return: 1 si el árbol es perfecto, 0 si no lo es
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (tree == NULL)
        return 1;

    if (tree->left == NULL && tree->right == NULL)
    {
        if (level == 0)
            level = depth;

        return (depth == level);
    }

    if (tree->left == NULL || tree->right == NULL)
        return 0;

    return is_perfect_recursive(tree->left, depth + 1, level) &&
           is_perfect_recursive(tree->right, depth + 1, level);
}

/**
 * binary_tree_is_perfect - Verifica si un árbol binario es perfecto
 * @tree: Puntero al nodo raíz del árbol
 *
 * Return: 1 si el árbol es perfecto, 0 si no lo es. Retorna 0 si el árbol es NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return is_perfect_recursive(tree, 0, 0);
}
}
