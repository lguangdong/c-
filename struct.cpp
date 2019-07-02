#include<iostream>
using namespace std;
typedef struct Book{
    char name[50];
    char type[50];
    int age;
}Books;
void printBook(struct Book *book);
void printBook2(struct Book book);
int main(){
    struct Book *book1;
    Books book;
    book1 = &book;
    strcpy(book1->name,"科学");
    strcpy(book1->type,"自然科学");
    book1->age = 10;
    printBook(&book);
    cout<<"-----"<<endl;
    printBook(book1);
    cout<<"---"<<endl;
    return 0;
}
void printBook(struct Book *book){
    cout<<"name:"<<book->name<<endl;
    cout <<"type:"<<book->type<<endl;
    cout << "age:"<<book->age<<endl;
}
void printBook2(struct Book book){
    cout<<"name:"<<book.name<<endl;
    cout <<"type:"<<book.type<<endl;
    cout << "age:"<<book.age<<endl;
}