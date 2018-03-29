// print the grandchild of the person

#include <stdio.h>

struct rel
{
    char child[40];
    char father[40];
};

struct rel data[6] = {
    {"menaka", "laxman"},
    {"ramba", "laxman"},
    {"lava", "ram"},
    {"kush", "ram"},
    {"ram", "dhasaradhan"},
    {"laxman", "dhasaradhan"}};

int main()
{
    char fatherSearch[] = "dhasaradhan";
    int searchCtr, childSrchCtr;
    for (searchCtr = 0; searchCtr < 6; searchCtr++)
    {
        if (strcmp(fatherSearch, data[searchCtr].father) == 0)
        {
            for (childSrchCtr = 0; childSrchCtr < 6; childSrchCtr++)
            {
                if (strcmp(data[searchCtr].child, data[childSrchCtr].father) == 0)
                    printf("%s\n", data[childSrchCtr].child);
            }
        }
    }
    return 0;
}
