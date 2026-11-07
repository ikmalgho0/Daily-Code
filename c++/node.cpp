#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
    Node(int x) {
        data = x;
        kiri = nullptr;
        kanan = nullptr;
    }
};

Node* tambah(Node* akar, int x) {
    if (akar == nullptr) return new Node(x);
    if (x < akar->data)      akar->kiri = tambah(akar->kiri, x);
    else if (x > akar->data) akar->kanan = tambah(akar->kanan, x);
    return akar;
}

bool cari(Node* akar, int x) {
    if (akar == nullptr) return false;
    if (x == akar->data) return true;
    if (x < akar->data) return cari(akar->kiri, x);
    return cari(akar->kanan, x);
}

void preorder(Node* n) {
    if (n == nullptr) return;
    cout << n->data << " ";
    preorder(n->kiri);
    preorder(n->kanan);
}

void inorder(Node* n) {
    if (n == nullptr) return;
    inorder(n->kiri);
    cout << n->data << " ";
    inorder(n->kanan);
}

void postorder(Node* n) {
    if (n == nullptr) return;
    postorder(n->kiri);
    postorder(n->kanan);
    cout << n->data << " ";
}

int tinggi(Node* n) {
    if (n == nullptr) return 0;
    int a = tinggi(n->kiri);
    int b = tinggi(n->kanan);
    return 1 + (a > b ? a : b);
}

void hapusSemua(Node* n) {
    if (n == nullptr) return;
    hapusSemua(n->kiri);
    hapusSemua(n->kanan);
    delete n;
}

int main() {
    Node* akar = nullptr;
    int data[] = {50, 30, 70, 20, 40, 60, 80};
    for (int i = 0; i < 7; i++) akar = tambah(akar, data[i]);

    cout << "Inorder: ";
    inorder(akar);
    cout << endl;
    cout << (cari(akar, 60) ? "60 ditemukan" : "60 tidak ada") << endl;
    cout << "Tinggi: " << tinggi(akar) << endl;

    hapusSemua(akar);
    return 0;
}