#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char* title;  // 책의 제목
    char* isbn;  // 국제표준도서번호
    int price;   // 책의 정가 

public:
    Book(const char* btitle, const char* bisbn, int bprice)
        : price(bprice)
    {
        title = new char[strlen(btitle) + 1];
        isbn = new char[strlen(bisbn) + 1];
        strcpy_s(title, strlen(btitle)+1, btitle);
        strcpy_s(isbn, strlen(bisbn) + 1, bisbn);
    }

    // 복사 생성자
    Book(const Book& other) 
        : price(other.price)
    {
        title = new char[strlen(other.title) + 1];
        isbn = new char[strlen(other.isbn) + 1];
        strcpy_s(title, strlen(other.title) + 1, other.title);
        strcpy_s(isbn, strlen(other.isbn) + 1, other.isbn);
    }

    // 대입 연산자
    Book& operator=(const Book& other)
    {
        if (this != &other)
        {
            delete[]title;
            delete[]isbn;
            title = new char[strlen(other.title) + 1];
            isbn = new char[strlen(other.isbn) + 1];
            strcpy_s(title, strlen(other.title)+ 1, other.title);
            strcpy_s(isbn, strlen(other.isbn) + 1, other.isbn);
            price = other.price;
        }
        return *this;
    }

    void ShowBookInfo()
    {
        cout << "제목: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "가격: " << price << endl;
    }
    ~Book() {
        delete[]title;
        delete[]isbn;
    }
};

class EBook : public Book
{
private:
    char* DRMKey; // 보안관련 키
public:
    EBook(const char* btitle, const char* bisbn, int bprice, const char* bDRMKey)
        : Book(btitle, bisbn, bprice)
    {
        DRMKey = new char[strlen(bDRMKey) + 1];
        strcpy_s(DRMKey, strlen(bDRMKey) + 1, bDRMKey);
    }

    // 복사 생성자
    EBook(const EBook& other) : 
        Book(other), DRMKey(new char[strlen(other.DRMKey) + 1])
    {
        strcpy_s(DRMKey, strlen(other.DRMKey) + 1, other.DRMKey);
    }

    // 대입 연산자
    EBook& operator=(const EBook& other)
    {
        if (this != &other)
        {
            Book::operator=(other);
            delete[]DRMKey;
            DRMKey = new char[strlen(other.DRMKey) + 1];
            strcpy_s(DRMKey, strlen(other.DRMKey) + 1,other.DRMKey);
        }
        return *this;
    }

    void ShowEBookInfo()
    {
        ShowBookInfo();
        cout << "인증키: " << DRMKey << endl;
    }

    ~EBook() {
        delete[]DRMKey;
    }
};

int main(void)
{
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;

    Book book_copy(book); // 복사 생성자 호출
    book_copy.ShowBookInfo();

    Book book2("또 다른 C++", "555-67890-123-4", 30000);
    book2 = book; // 대입 연산자 호출
    book2.ShowBookInfo();
    cout << endl;

    EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kw");
    ebook.ShowEBookInfo();
    cout << endl;

    EBook ebook_copy(ebook); // 복사 생성자 호출
    ebook_copy.ShowEBookInfo();
    cout << endl;

    EBook ebook2("또 다른 C++ ebook", "555-67890-123-5", 15000, "asd0c1e2f3");
    ebook2 = ebook; // 대입 연산자 호출
    ebook2.ShowEBookInfo();
    return 0;
}