#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string t = "Unknown", std::string a = "Unknown", int y = 2026) 
        : title(t), author(a), year(y) {
        std::cout << "Book '" << title << "' added to system.\n";
    }

    ~Book() {
        std::cout << "Object Book '" << title << "' destroyed.\n";
    }

    void getInfo() {
        std::cout << "Info: " << author << " - " << title << " (" << year << ")\n";
    }
};

class Reader {
private:
    std::string name;
    int readerID;

public:
    Reader() : Reader("Guest", 0) {}

    Reader(std::string n, int id) : name(n), readerID(id) {
        std::cout << "Reader " << name << " registered with ID: " << readerID << "\n";
    }

    ~Reader() {
        std::cout << "Reader profile " << name << " closed.\n";
    }

    void showReader() {
        std::cout << "Reader: " << name << " (ID: " << readerID << ")\n";
    }
};

class Librarian {
private:
    std::string name;
    std::string rank;

public:
    Librarian(std::string n) : name(n), rank("Trainee") {
        std::cout << "Librarian " << name << " hired.\n";
    }

    Librarian(std::string n, std::string r) : name(n), rank(r) {
        std::cout << "Experienced Librarian " << name << " (" << rank << ") on shift.\n";
    }

    ~Librarian() {
        std::cout << "Librarian " << name << " finished shift.\n";
    }

    void work() {
        std::cout << "Librarian " << name << " is processing documents.\n";
    }
};

int main() {
    std::cout << "--- Library System Start ---\n\n";

    Book b1("Clean Code", "Robert Martin", 2008);
    Book b2; 

    Reader r1("Oleksandra", 777);
    Reader r2;

    Librarian l1("Ivan");
    Librarian l2("Maria", "Senior");

    std::cout << "\n--- Methods Execution ---\n";
    b1.getInfo();
    r1.showReader();
    l2.work();

    std::cout << "\n--- System Shutdown ---\n";
    return 0;
}
