/* sample input
7
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5

9
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5
deleteFirst
deleteLast
*/

/* 実装方針


#include <cstdio>
#include <cstdlib>
#include <cstring>
*/

#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Node{
    int key;
    Node *next, *prev;
};

// 番兵(基準値のようなもの)nilを定義
Node *nil;

// keyを持つ最初のノードのポインタを返す関数
Node* listSearch(int key){
    Node *cur = nil->next; // 番兵の次の要素から辿る

    while(cur != nil && cur->key != key){
        cur = cur->next;
    }

    return cur;
}

// リストの初期化
void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

// リストの内容を出力
void printList(){
    Node *cur = nil->next;
    int isf = 0;

    while(1){
        if(cur == nil) break;
        if(isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }

    printf("\n");
}

// 指定されたノードのポインタを削除する関数
void deleteNode(Node *t){
    if(t == nil) return; // tが番兵の場合は処理しない

    // リンクの繋ぎ変え
    t->prev->next = t->next;
    t->next->prev = t->prev;

    // free関数でメモリの開放(元々あったデータが削除されることでメモリを開放している)
    free(t);
}

// 先頭を削除
void deleteFirst(){
    deleteNode(nil->next);
}

// 末尾を削除
void deleteLast(){
    deleteNode(nil->prev);
}

void deleteKey(int key){
    // 検索したノードを削除
    deleteNode(listSearch(key));
}

void insert(int key){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    // 番兵の直後に要素を追加し、リンクをつなぎ替える
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main(){
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    
    scanf("%d", &n);
    init();

    for(i=0; i<n; i++){
        scanf("%s%d", com, &key); // より高速な入力関数を使用

        // insertの頭文字であるiを認識するif文
        if(com[0] == 'i'){
            insert(key);
            np++;
            size++;

        // deleteの頭文字のdを認識するif文
        }else if(com[0] == 'd'){

            // 配列comの要素が6より大きかった場合(=入力された文字列が6文字より大きかった場合)
            if(strlen(com) > 6){
                // com[6]がF、つまりdeleteFirstかどうか
                if(com[6] == 'F'){
                    deleteFirst();

                // com[6]がL、つまりdeleteLastかどうか
                }else if(com[6] == 'L'){
                    deleteLast();
                }

            // keyで指定されたノードのポインタを削除する
            }else{
                deleteKey(key); 
                nd++;
            }

            size--;
        }
        
    }
    printList();
}


/* 参考回答
#include<iostream>
using namespace std;

class LinkedList {
private:
  class Node {
  public:
    int key;
    Node *prev;
    Node *next;
  };
  
  Node *nil;  // 番兵

  // keyを持つ最初のノードのポインタを返す
  Node* list_search(int key) {
    Node *current = nil->next;
    while (current != nil && current->key != key) {
      current = current->next;
    }
    return current;
  }

  // 引数に与えられたノードを削除
  void delete_node(Node *node) {
    if (node == nil) return;  // nodeが番兵の時は何もしない
    // リンクつなぎ変え
    node->prev->next = node->next;
    node->next->prev = node->prev;
    delete node;  // メモリ解放
  }
  
public:
  LinkedList() {
    nil = new Node;
    nil->prev = nil;
    nil->next = nil;
  }

  // keyを先頭に挿入
  void insert(int key) {
    Node *x;  // 新しいノードをさすポインタ
    x = new Node;
    x->key = key;
    // リンクのつなぎ替え
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
  }  

  // keyを持つ最初のノードを削除
  void delete_key(int key) {
    delete_node(list_search(key));
  }

  // 先頭を削除
  void delete_first() {
    delete_node(nil->next);
  }

  // 末尾を削除
  void delete_last() {
    delete_node(nil->prev);
  }

  // リストの全ての要素を表示
  void print_list() {
    int cnt = 0;
    Node *current = nil->next;
    
    while (current != nil) {
      if (cnt++ > 0) cout << " ";
      cout << current->key;
      current = current->next;
    }
    cout << endl;      
  }
  
};

int main(){
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    
    scanf("%d", &n);
    init();

    for(i=0; i<n; i++){
        scanf("%s%d", com, &key); // より高速な入力関数を使用

        if(com[0] == 'i'){
            insert(key);
            np++;
            size++;
        }else if(com[0] == 'd'){
            if(strlen(com) > 6){
                if(com[6] == 'F'){
                    deleteFirst();
                }else if(com[6] == 'L'){
                    deleteLast();
                }else{
                    deleteKey(key);
                    nd++;
                }
                size--;
            }
        }
    }

    printList();
}


int main(void) {
  LinkedList l;
  // 1~10を格納
  for (int i = 10; i > 0; i--) l.insert(i);
  l.print_list();
  // 末尾を削除
  l.delete_last();
  l.print_list();
  // 先頭を削除
  l.delete_first();
  l.print_list();
  // 3を削除
  l.delete_key(3);
  l.print_list();

  return 0;
}

int main(){
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    
    scanf("%d", &n);
    init();

    for(i=0; i<n; i++){
        scanf("%s%d", com, &key); // より高速な入力関数を使用

        if(com[0] == 'i'){
            insert(key);
            np++;
            size++;
        }else if(com[0] == 'd'){
            if(strlen(com) > 6){
                if(com[6] == 'F') deleteFirst();
                else if(com[6] == 'L') deleteLast();
            }else{
                deleteKey(key); nd++;
            }
            size--;
        }
        
    }
    printList();
}
*/