// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>
// test linked list

#include <iostream>

#include "linked_list.h"

// test linked list
int test_linked_list() {
    auto p_linked_list = new data_structure::LinkedList();
    // insert data
    {
        p_linked_list->push_front(1);
        p_linked_list->push_front(11);
        p_linked_list->push_front(111);
        p_linked_list->push_front(1111);
        p_linked_list->push_front(11111);
        // display data
        {
            p_linked_list->display();
        }
    }

    // delete data (tail data)
    {
        p_linked_list->remove(1);
        // display data
        {
            p_linked_list->display();
        }
    }

    // delete data (head data)
    {
        p_linked_list->remove(11111);
        // display data
        {
            p_linked_list->display();
        }
    }

    // delete data (no exist data)   // core?
    {
        p_linked_list->remove(2);
        // display data
        {
            p_linked_list->display();
        }
    }

    // delete LinkedList
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