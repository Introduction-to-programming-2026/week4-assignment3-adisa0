/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 1. Krijimi i struct (Rregulli 1)
typedef struct
{
    string name;
    string phone;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "Carter";
    people[0].phone = "+1-617-495-1000";

    people[1].name = "David";
    people[1].phone = "+1-949-468-2750";
    
    people[2].name = "John";
    people[2].phone = "+1-617-495-1000";

    string name = get_string("Name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].phone);
            return 0;
        }
    }
    
    printf("Not found\n");
    return 1;
}