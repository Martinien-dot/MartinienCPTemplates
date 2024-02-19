// permutations with duplicates allowed 
#include <bits/stdc++.h> 
using namespace std; 
 
#include <iostream>

// Structure pour représenter un nœud dans l'arbre
struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

// Classe pour représenter l'arbre binaire de recherche
class BinarySearchTree {
private:
    Node* root;

    // Fonction récursive pour l'insertion d'un nœud dans l'arbre
    Node* insertRecursive(Node* current, int key) {
        if (current == nullptr) {
            return new Node(key);
        }

        if (key < current->key) {
            current->left = insertRecursive(current->left, key);
        } else if (key > current->key) {
            current->right = insertRecursive(current->right, key);
        }

        return current;
    }

    // Fonction récursive pour la recherche d'une clé dans l'arbre
    bool searchRecursive(Node* current, int key) {
        if (current == nullptr) {
            return false;
        }

        if (key == current->key) {
            return true;
        } else if (key < current->key) {
            return searchRecursive(current->left, key);
        } else {
            return searchRecursive(current->right, key);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Méthode publique pour insérer une clé dans l'arbre
    void insert(int key) {
        root = insertRecursive(root, key);
    }

    // Méthode publique pour rechercher une clé dans l'arbre
    bool search(int key) {
        return searchRecursive(root, key);
    }
};

int main() {
    BinarySearchTree bst;

    // Insérer des clés dans l'arbre
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(6);
    bst.insert(4);

    // Rechercher des clés dans l'arbre
    std::cout << "Recherche de 4 : " << (bst.search(4) ? "trouvé" : "non trouvé") << std::endl;
    std::cout << "Recherche de 6 : " << (bst.search(6) ? "trouvé" : "non trouvé") << std::endl;

    return 0;
}
