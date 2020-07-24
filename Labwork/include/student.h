#pragma once
#include <iostream>
#include <string>
#define MAX 10
class Student 
{ 
    private :
    std:: string name;
   
    int num_books;
     long books[MAX];
     
    public:
    Student();
    void setName(const std:: string &);
    std::string getName();
    void issueBook(long id);
    void getIssuedBooks(long (&bookIds)[MAX]);
};
