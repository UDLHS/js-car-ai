// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string filename;
//     cout << "Input the file name to be opened: ";
//     cin >> filename;

//     FILE *file = fopen(filename.c_str(), "r");

//     if (file == NULL) {
//         cerr << "File " << filename << " not found." << endl;
//         return 1;
//     }

//     char ch;
//     int num_words = 0;
//     int num_characters = 0;
//     bool in_word = false;

//     while ((ch = fgetc(file)) != EOF) {
//         num_characters++;

//         if (ch == ' ' || ch == '\n' || ch == '\t') {
//             if (in_word) {
//                 num_words++;
//                 in_word = false;
//             }
//         } else {
//             in_word = true;
//         }
//     }

//     // If the last character is part of a word, count the last word
//     if (in_word) {
//         num_words++;
//     }

//     fclose(file);

//     cout << "The number of words in the file " << filename << " are " << num_words << endl;
//     cout << "The number of characters in the file " << filename << " are " << num_characters << endl;

//     return 0;
// }

// ------------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string file_name;
//     string line_num_str;

//     cout << "Input the file name to be opened: ";
//     cin >> file_name;

//     cout << "Input the line you want to remove: ";
//     cin >> line_num_str;
//     int line_number = stoi(line_num_str);

//     ifstream infile(file_name);
//     if (!infile) {
//         cerr << "File " << file_name << " not found." << endl;
//         return 1;
//     }

//     string text;
//     string line;
//     int current_line = 1;
//     while (getline(infile, line)) {
//         if (current_line != line_number) {
//             text += line + "\n";
//         }
//         current_line++;
//     }

//     infile.close();

//     cout << "The content of the file " << file_name << " is:" << endl;
//     cout << text;

//     return 0;
// }

// ------------------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string filename;
//     cout << "Input the file name to be opened: ";
//     cin >> filename;

//     ifstream infile(filename);
//     if (!infile) {
//         cerr << "File " << filename << " not found." << endl;
//         return 1;
//     }

//     string tempFilename = filename + "_temp";
//     ofstream outfile(tempFilename);

//     string new_line;
//     cout << "Input the content of the new line: ";
//     cin.ignore(); // Ignore the newline character left in the buffer after the previous input
//     getline(cin, new_line);

//     int line_number;
//     cout << "Input the line you want to replace: ";
//     cin >> line_number;

//     string line;
//     int current_line = 1;

//     while (getline(infile, line)) {
//         if (current_line == line_number) {
//             outfile << new_line << endl;
//         } else {
//             outfile << line << endl;
//         }
//         current_line++;
//     }

//     infile.close();
//     outfile.close();

//     remove(filename.c_str());
//     rename(tempFilename.c_str(), filename.c_str());

//     cout << "The content of the file " << filename << " is now:" << endl;
//     ifstream resultFile(filename);
//     if (resultFile) {
//         string content;
//         while (getline(resultFile, content)) {
//             cout << content << endl;
//         }
//         resultFile.close();
//     } else {
//         cerr << "Error opening the file " << filename << " for reading." << endl;
//         return 1;
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string source_file, new_file;

//     cout << "Input the source file name: ";
//     cin >> source_file;

//     cout << "Input the new file name: ";
//     cin >> new_file;

//     ifstream source(source_file, ios::binary);
//     if (!source) {
//         cerr << "Error: Source file " << source_file << " not found." << endl;
//         return 1;
//     }

//     ofstream destination(new_file, ios::binary);
//     if (!destination) {
//         cerr << "Error: Cannot create destination file " << new_file << "." << endl;
//         source.close();
//         return 1;
//     }

//     destination << source.rdbuf();

//     source.close();
//     destination.close();

//     cout << "The file " << source_file << " copied successfully to " << new_file << "." << endl;

//     return 0;
// }

// --------------------------------------------------------------------------------


// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string file1, file2, merged_file;

//     cout << "Input the first file name: ";
//     cin >> file1;

//     cout << "Input the second file name: ";
//     cin >> file2;

//     cout << "Input the new file name where to merge the above two files: ";
//     cin >> merged_file;

//     ifstream infile1(file1);
//     if (!infile1) {
//         cerr << "Error: File " << file1 << " not found." << endl;
//         return 1;
//     }

//     ifstream infile2(file2);
//     if (!infile2) {
//         cerr << "Error: File " << file2 << " not found." << endl;
//         return 1;
//     }

//     ofstream outfile(merged_file);
//     if (!outfile) {
//         cerr << "Error: Cannot create file " << merged_file << "." << endl;
//         infile1.close();
//         infile2.close();
//         return 1;
//     }

//     outfile << infile1.rdbuf() << endl;
//     outfile << infile2.rdbuf();

//     infile1.close();
//     infile2.close();
//     outfile.close();

//     cout << "The file " << file1 << " copied successfully to " << merged_file << endl;
//     cout << "The file " << file2 << " copied successfully to " << merged_file << endl;
//     cout << "The two files merged into " << merged_file << " file successfully...!!" << endl;
//     cout << "Here is the content of the merge file " << merged_file << ":" << endl;
    
//     ifstream mergedFile(merged_file);
//     if (!mergedFile) {
//         cerr << "Error: Unable to open the merged file " << merged_file << " for reading." << endl;
//         return 1;
//     }

//     string line;
//     cout << "The content of the file " << merged_file << " is:" << endl;
//     while (getline(mergedFile, line)) {
//         cout << line << endl;
//     }

//     mergedFile.close();

//     return 0;
// }


