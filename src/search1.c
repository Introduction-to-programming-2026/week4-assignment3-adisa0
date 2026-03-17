/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Battista", "Bari", "Anatoli", "Quinn"};
    string s = get_string("Name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}