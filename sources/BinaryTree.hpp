#pragma once 
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <unordered_map>
#include <map>
#include <set>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

namespace ariel{
    template<typename T>
    class BinaryTree{
        struct Node{
            T value;
            Node* father;
            Node* sonLeft;
            Node* sonRight;

            Node(T):father(nullptr), sonLeft(nullptr), sonRight(nullptr){};
        };

        Node* head;

        public:
            BinaryTree():head(nullptr){};
            BinaryTree& add_root(const T& root){
                return *this;
            }
            BinaryTree& add_left(const T& f, const T& l){
                return *this;
            }
            BinaryTree& add_right(const T& f, const T& r){
                return *this;
            }
            friend ostream& operator<<(ostream& os, BinaryTree& input){
                return os;
            }

            class itPre{
                protected:
                    Node* p;

                public:
                    itPre(Node *ptr = nullptr): p(ptr){};
                    bool operator!=(const itPre& other){
                        return p != other.p;
                    }
            
                    T& operator*(){
                        return this->p->value;
                    }

                    itPre operator++(int){
                        return *this;
                    }

                    itPre& operator++(){
                        return *this;
                    }

                    T *operator->(){
                        return nullptr;
                    }
            };

            class itIn{
                protected:
                    Node* p;

                public:
                    itIn(Node *ptr = nullptr): p(ptr){};
                    bool operator!=(const itIn& other){
                        return p != other.p;
                    }
            
                    T& operator*(){
                        return this->p->value;
                    }

                    itIn operator++(int){
                        return *this;
                    }

                    itIn& operator++(){
                        return *this;
                    }

                    T *operator->(){
                        return nullptr;
                    }
            };

            class itPost{
                protected:
                    Node* p;

                public:
                    itPost(Node *ptr = nullptr): p(ptr){};
                    bool operator!=(const itPost& other){
                        return p != other.p;
                    }
            
                    T& operator*(){
                        return this->p->value;
                    }

                    itPost operator++(int){
                        return *this;
                    }

                    itPost& operator++(){
                        return *this;
                    }

                    T *operator->(){
                        return nullptr;
                    }
            };

            itIn begin(){
                return itIn();
            }

            itIn end(){
                return itIn();
            }


            itPre begin_preorder(){
                return itPre(head);
            }
            
            itPre end_preorder(){
                return nullptr;
            }
                
            itIn begin_inorder(){
                return itIn(head);
            }
            
            itIn end_inorder(){
                return nullptr;
            }
            
            itPost begin_postorder(){
                return itPost(head);
            }
            
            itPost end_postorder(){
               return nullptr; 
            }

            

            



        
        
        
    };
    
    
}