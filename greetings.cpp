#include <iostream>

 const char* greeting[4]
      = { "Hi, sir!", "Hello, master!", "Hail, Lord!", "Ave, almighty!" };


void greet(int size){
    int i, count;
    
    while (count < size){
        std::cout << greeting[i] << "\n";
        i++;
        count++;
        if (i==4)
          i=0;
    }
}

// Driver code
int main()
{
    int size_of_ego;
  // Initialize array of pointer
  
  std::cout<<"What's the size of your ego [km]?";
  std::cin>>size_of_ego;
  // Printing Strings stored in 2D array
  greet(size_of_ego);
 
  return 0;
}
