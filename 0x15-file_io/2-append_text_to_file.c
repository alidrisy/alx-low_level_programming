#include <string.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: the name of the file to create.
* @text_content: is string to add at the end of the file
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int x, n;

if (filename == NULL)
return (-1);

x = open(filename, O_APPEND);

if (x == -1)
return (-1);

if (text_content != NULL)
{
n = write(x, text_content, strlen(text_content));
if (n == -1)
return (-1);
}
else
return(1);

close(x);

return (1);
}
