// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>
// test linked list

#include <iostream>

#include "linked_list.h"

// test linked list
int test_linked_list() {
    auto p_linked_list = new data_structure::LinkedList();
    // insert data
    // test push_front
    {
        std::cout << "===start test push_front===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->push_front(1);
        p_linked_list->push_front(11);
        p_linked_list->push_front(111);
        p_linked_list->push_front(1111);
        p_linked_list->push_front(11111);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test push_front===" << std::endl;
    }
    // insert data
    // test push_back
    {
        std::cout << "===start test push_back===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->push_back(111111);
        p_linked_list->push_back(1111111);
        p_linked_list->push_back(11111111);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test push_back===" << std::endl;
    }
    // insert data
    // test insert
    {
        std::cout << "===start test insert===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->insert(111111111);
        p_linked_list->insert(111111111, 1);
        p_linked_list->insert(111111111, 5);
        p_linked_list->insert(111111111, 100);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test insert===" << std::endl;
    }

    // delete data (tail data)
    // test remove
    {
        std::cout << "===start test remove===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove(1);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove===" << std::endl;
    }

    // delete data (head data)
    // test remove
    {
        std::cout << "===start test remove===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove(11111);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove===" << std::endl;
    }

    // delete data (no exist data)
    // test remove
    {
        std::cout << "===start test remove===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove(2);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove===" << std::endl;
    }

    // delete data by index (head data)
    // test remove_index
    {
        std::cout << "===start test remove_index===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove_index(0);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove_index===" << std::endl;
    }

    // delete data by index (middle data)
    // test remove_index
    {
        std::cout << "===start test remove_index===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove_index(1);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove_index===" << std::endl;
    }

    // delete data by index (tail data)
    // test remove_index
    {
        std::cout << "===start test remove_index===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        int len = p_linked_list->length();
        p_linked_list->remove_index(len - 1);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove_index===" << std::endl;
    }

    // delete data by index (no exist data)
    // test remove_index
    {
        std::cout << "===start test remove_index===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->remove_index(1000);
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test remove_index===" << std::endl;
    }

    // find data by value
    // test find
    {
        std::cout << "===start test find===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        auto p_node = p_linked_list->find(11111);
        if (p_node != nullptr) {
            std::cout << "p_node->_data--->" << p_node->_data << std::endl;
        } else {
            std::cout << "p_node is nullptr" << std::endl;
        }
        std::cout << "===end test find===" << std::endl;
    }

    // find data by index
    // test find_index
    {
        std::cout << "===start test find_index===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        auto p_node = p_linked_list->find_index(3);
        if (p_node != nullptr) {
            std::cout << "p_node->_data--->" << p_node->_data << std::endl;
        } else {
            std::cout << "p_node is nullptr" << std::endl;
        }
        std::cout << "===end test find_index===" << std::endl;
    }

    // reverse linked list
    // test reverse
    {
        std::cout << "===start test reverse===" << std::endl;
        // display data
        {
            p_linked_list->display();
        }
        p_linked_list->reverse();
        // display data
        {
            p_linked_list->display();
        }
        std::cout << "===end test reverse===" << std::endl;
    }

    // delete LinkedList
    // test clear
    {
        if (p_linked_list != nullptr) {
            p_linked_list->clear();
            delete p_linked_list;
            p_linked_list = nullptr;
        }
    }
    return 0;
}

int main(int argc, char** argv) {
    // test linked list
    test_linked_list();
    return 0;
}