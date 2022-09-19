#include <cstdio>

int main() {

    struct CatalogCard {
        const char * title;
        const char * author;
        const char * publisher;
        const char * subject;
        int isbn;
        int oclc;
        struct dewey_decimal {
            int class_;
            int section;
        } dewey_decimal;
        int year_published;
        int year_acquired;
        int quantity_in_stock;
    };

    CatalogCard a_clash_of_kings = {
        "A Clash of Kings",
        "George R. R. Martin",
        "Bantam Spectra",
        "Fantasy",
        553108034,
        59667381,
        {813, 73},
        1999,
        2000,
        2
    };

    printf("Title: %s\n", a_clash_of_kings.title);
    printf("Author: %s\n", a_clash_of_kings.author);
    printf("Publisher: %s\n", a_clash_of_kings.publisher);
    printf("Subject: %s\n", a_clash_of_kings.subject);
    printf("ISBN: %d\n", a_clash_of_kings.isbn);
    printf("OCLC: %d\n", a_clash_of_kings.oclc);
    printf("Dewey Decimal: %d.%d\n", a_clash_of_kings.dewey_decimal.class_, a_clash_of_kings.dewey_decimal.section);
    printf("Year Published: %d\n", a_clash_of_kings.year_published);
    printf("Year Acquired: %d\n", a_clash_of_kings.year_acquired);
    printf("Quantity in Stock: %d\n", a_clash_of_kings.quantity_in_stock);
}