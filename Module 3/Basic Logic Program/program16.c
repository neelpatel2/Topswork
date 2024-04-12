//Convert country’s name in abbreviate form
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

#define MAX_COUNTRY_LENGTH 100
#define MAX_ABBREV_LENGTH 10

typedef struct {
    char name[MAX_COUNTRY_LENGTH];
    char abbreviation[MAX_ABBREV_LENGTH];
} Country;

Country countries[] = {
    {"United States of America", "US"},
    {"United Kingdom", "UK"},
    {"Canada", "CA"},
    {"France", "FR"},
    {"Germany", "DE"},
    {"India", "IN"},
    {"Sri Lanka", "SR"},
    {"Australia", "AU"},
    {"China", "CN"},
    {"Pakistan", "Pk"},


};

int main() {
    char user_country[MAX_COUNTRY_LENGTH];
    char abbreviation[MAX_ABBREV_LENGTH];

    printf("Enter a country name (in uppercase or lowercase): ");
    fgets(user_country, MAX_COUNTRY_LENGTH, stdin);

    user_country[strcspn(user_country, "\n")] = '\0';

    for (int i = 0; user_country[i] != '\0'; i++) {
        user_country[i] = toupper(user_country[i]);
    }

    abbreviation[0] = '\0'; 

    for (int i = 0; i < sizeof(countries) / sizeof(countries[0]); i++) {
        if (strcmp(user_country, countries[i].name) == 0) {
            strcpy(abbreviation, countries[i].abbreviation);
            break;
        }
    }

    if (abbreviation[0] != '\0') {
        printf("Abbreviation: %s\n", abbreviation);
    } else {
        printf("Abbreviation not found for '%s'\n", user_country);
    }

    return 0;
}