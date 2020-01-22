#ifndef BINARYTREE_H
#define BINARYTREE_H

template<typename T>
class btree;

template<typename T>
class btnode {
private:
    T data;
    btnode<T> *lchild, *rchild;
public:
    btnode(){};
    btnode(T e);
    T getData();
    btnode<T> *getLchild() {return lchild;} ;
    btnode<T> *getRchild() {return rchild;} ;
    friend class btree<T>;
};

template<typename T>
btnode<T>::btnode(T e){
    data = e;
    lchild = NULL;
    rchild = NULL;
}

template<typename T>
T btnode<T>::getData(){
    return data;
}

template<typename T>
class btree {
private:
    btnode<T> *root;
public:
    //void create_tree();
    void setRoot(T e);
    btnode<T>* getRoot() {return root;} ;
    T getRootData();
    void traverse_inorder();
    void setLchild(btnode<T>* p, T e);
    void setRchild(btnode<T>* p, T e);
    btnode<T>* find(T e);

};

template<typename T>
void btree<T>::setRoot(T e){
    root = new btnode<T>(e);
}
template<typename T>
T btree<T>::getRootData(){
    T data = root->getData();
    return data;
}

template<typename T>
void btree<T>::setLchild(btnode<T>* p, T e){
    btnode<T>* s = new btnode<T>(e);
    p->lchild = s;
}

template<typename T>
void btree<T>::setRchild(btnode<T>* p, T e){
    btnode<T>* s = new btnode<T>(e);
    p->rchild = s;
}



#endif