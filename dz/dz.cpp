#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string author;
    std::string title;
    std::string publisher;
    int year;
    int pages;

public:
    explicit Book(const std::string& a, const std::string& t, const std::string& p, int y, int pg)
        : author(a), title(t), publisher(p), year(y), pages(pg) {
    }

    std::string getAuthor() const { return author; }
    std::string getPublisher() const { return publisher; }
    int getYear() const { return year; }

    void printInfo() const {
        std::cout << "Автор: " << author
            << ", Название: " << title
            << ", Издательство: " << publisher
            << ", Год: " << year
            << ", Страниц: " << pages << std::endl;
    }
};

void booksByAuthor(const std::vector<Book>& books, const std::string& author) {
    std::cout << "\nКниги автора " << author << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            book.printInfo();
        }
    }
}

void booksByPublisher(const std::vector<Book>& books, const std::string& publisher) {
    std::cout << "\nКниги издательства " << publisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == publisher) {
            book.printInfo();
        }
    }
}

void booksAfterYear(const std::vector<Book>& books, int year) {
    std::cout << "\nКниги, выпущенные после " << year << " года:\n";
    for (const auto& book : books) {
        if (book.getYear() > year) {
            book.printInfo();
        }
    }
}

int main() {
    std::vector<Book> library = {
        Book("Толстой Л.Н.", "Война и мир", "Эксмо", 2020, 1225),
        Book("Достоевский Ф.М.", "Преступление и наказание", "Азбука", 2019, 640),
        Book("Булгаков М.А.", "Мастер и Маргарита", "АСТ", 2021, 500),
        Book("Толстой Л.Н.", "Анна Каренина", "Азбука", 2018, 864)
    };

    booksByAuthor(library, "Толстой Л.Н.");
    booksByPublisher(library, "Азбука");
    booksAfterYear(library, 2019);

    return 0;
}
