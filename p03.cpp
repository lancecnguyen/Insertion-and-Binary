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
			 
			 t1 = high_resolution_clock

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  