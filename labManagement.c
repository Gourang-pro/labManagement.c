#include <stdio.h>
#include <stdlib.h>

int main()
 {
   char project_name[50];
   int num_files;
   int num_lines;

   // Get project name from user input
   printf("Enter project name: ");
   fgets(project_name, sizeof(project_name), stdin);

   // Get number of files in the project
   printf("Enter number of files: ");
   scanf("%d", &num_files);

   // Get total number of lines of code
   printf("Enter total number of lines of code: ");
   scanf("%d", &num_lines);

   // Calculate average lines of code per file
   double avg_lines_per_file = (double) num_lines / num_files;

   // Display project information
   printf("Project Name: %s\n", project_name);
   printf("Number of Files: %d\n", num_files);
   printf("Total Lines of Code: %d\n", num_lines);
   printf("Average Lines of Code per File: %.2lf\n", avg_lines_per_file);

   return 0;
}