//This program evaluates the performance of improved
//insertion sort.
//----------------------------------------------
//Author1:		Leif Nevener
//Student ID:	*20333208
//E-Mail:		lnevener@uco.edu
//Author 2:		Lance Nguyen
//Student ID:	*20354541
//E-Mail:		lnguyen58@uco.edu
//Course:		CMSC 2123 – Discrete Structures
//CRN:			11128 Autumn 2019
//Assignment:	p02
//Due:			October 23, 2019
//Account:		sz048
//----------------------------------------------
//----------------------------------------------

#include <cstdlib>
#include <istream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

/*
 * Handle command line error
 */
 struct CommandLineException
 {
	 CommandLineException (int max, int provided)
	 {
		 cout << endl;
		 cout << "Too many command line arguments." << endl;
		 cout << provided << " arguments were entered, and only " << max <<
				" are allowed." << endl;
	 }
 };
 
 /*
 * Handle exception when openning a file
 */
 struct FileException {
	 FileException (const string file) {
		 cout << endl << "'" << file << "'" << " could not be opened." << endl;
	 }
 };
 
 /*
  * Generate random elements for the input arrays.
  * The content for two arrays are the same.
  */
 void PrintArray(int* arr, int size, ostream& o) {
	 for (int i = 0; i < size; i++) {
		 o << arr[i] << " ";
	 }
	 o << endl;
 }
 
 /*
  * Print all the elements in int array arr to output stream o1.
  * Elements are separated by a single space.
  * The time used for this algorithm is printed to output stream o2.
  */
 void PrintResult (int* arr, ostream& o1, ostream& o2, int size, duration<double,
 std::milli> duration) {
	 for (int i = 0; i < size; i++) {
		 o1 << arr[i] << " ";
	 }
	 o1 << endl;
	 o2 << duration.cout() << endl;
 }
 
 void MyInsertionSort (int* arr, int size) {
	 /*** put your code here ***/
	 
 }
 
 void MyImprovedSort(int* arr, int size( {
	 /*** put your code here ***/
 
 }
 
 void P03Manager(ostream& o1, ostream& o2, ostream& o3, ostream& o4) {
	 for (int size = 200; size <= 2000; size += 200) {
		 int* arr1 = new int [size];
		 int* arr2 = new int [size];
		 
		 high_resolution_clock::time_point t1;
		 high resolution clock::time point t2;
		 
		 for (int i = 0; i < 10; i++) {
			 GenerateArray(arr1, arr2, size);
			 PrintArray (arr1, size, o1);
			 
			 t1 = high_resolution_clock::now();
			 MyInsertionSort(arr1, size);
			 t2 = high_resolution_clock::now();
			 duration<double, std::milli> time_span = t2 - t1;
			 PrintResult(arr1, o2, o4, size, time_span);
			 
			 t1 = high_resolution_clock::now();
			 MyImprovedSort(arr2, size);
			 t2 = high_resolution_clock::now();
			 time_span = t2 - t1;
			 PrintResult(arr2,o3, o4, size, time_span);
		 }
		 
		 delete [] arr1;
		 delete [] arr2;
		 arr1 = NULL;		//make sure this memory isn't used
		 arr2 = NULL;		//make sure this memory isn't used
	 }
 }
 
 int main (int argc, char* argv[])
 {
	 try{ srand(time(NULL));	// seed for generating random numbers
	 char ofn1 [255], ofn2[255], ofn3[255], ofn4[255];
	 switch (argc) {
		 case 1:
			cout << endl << "Enter the name of output file 1 for unsorted array: ";
			cin >> ofn1;
		 case 2:
			cout << endl << "Enter the name of output file 2 for sorted array using algorithm 1: ";
			cin >> ofn2;
		 case 3:
			cout << endl << "Enter the name of output file 3 for sorted array using algorithm 2: ";
			cin >> ofn3;
		 case 4:
			cout << endl << "Enter the name of output file 4 for time used: ";
			cin >ofn4;
			break;
		 case5: break;
		 default: throw CommandLineException(4, argc - 1);
	 }
	 switch (argc) {
		 case 5: strcpy(ofn4, argv[4]);
		 case 4: strcpy(ofn3, argv[3]);
		 case 3: strcpy(ofn2, argv[2]);
		 case 2: strcpy(ofn1, argv[1]);
		 case 1: break;
		 default: throw CommandLineException(4, argc - 1);
	 }
	 
	 ofstream o1(ofn1);
	 ofstream o2(ofn2);
	 ofstream o3(ofn3);
	 ofstream o4(ofn4);
	 if (!o1)
		 throw FileException(ofn1);
	 if (!o2)
		 throw FileException(ofn2);
	 if (!o3)
		 throw FileException(ofn3);
	 if (!o4)
		 throw FileException(ofn4);
	 
	 P03Manager(o1, o2, o3, o4);
	 o1.close();
	 o2.close();
	 o3.close();
	 o4.close();
	 }
	 catch(...)
	 {
		 cout << "Program ended" << endl;
		 exit (EXIT_FAILURE);
	 }
	 return 0;
 }
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  