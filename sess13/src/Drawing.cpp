#include "../include/Drawing.hpp"
#include <cmath>

void Drawing::half_pyramid_right_top(int size){
  int length = 1;
  for(int i = 0; i <= size - 1; i++){ 
    for(int j = 0; j <= length - 1; j++){
      std::cout << " * ";
    };
    length++;
    std::cout << std::endl;
  };
};

void Drawing::half_pyramid_right_bottom(int size){
  int length = size;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= length - 1; j++){
      std::cout << " * ";
    };
    length--;
    std::cout << std::endl;
  };
};

void Drawing::half_pyramid_left_top(int size){
  int last = size;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j >= last - 1){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      };
    }
    std::cout << std::endl;
    last--;
  }
}

void Drawing::half_pyramid_left_bottom(int size){
  int start = 0;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j >= start){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      };
    }
    std::cout << std::endl;
    start++;
  }
}

void Drawing::left_pyramid(int size){
  int max = std::abs(size / 2);
  int last = max;
  bool decrement = false;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j >= last && j <= max){
        std::cout << " * ";
      }else if(last == 0){
        decrement = true;
      }else{
        std::cout << "   ";
      };
    };
    if(decrement == false){
      last--;
    }else{
      last++;
    };
    std::cout << std::endl;
  }
};

void Drawing::right_pyramid(int size){
  int max = std::abs(size / 2);
  int last = 1;
  bool decrement = false;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j <= last - 1 && j <= max){
        std::cout << " * ";
      }else if(j == last && j > max){
        decrement = true;
      }else{
        std::cout << "   ";
      }
    };
    if(decrement == false){
      last++;
    }else{
      last--;
    }
    std::cout << std::endl;
  };
};

void Drawing::bottom_pyramid(int size){
  int first = 0;
  int last = size;
  for(int i = 0 ; i <= last - 1; i++){
    for(int j = 0; j <= last - 1; j++){
      if(j >= first && j <= last){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      }
    }
    std::cout << std::endl;
    first++;
    last--;
  }
}

void Drawing::top_pyramid(int size){
  int start = std::abs(size / 2);
  int last = start + 1;
  int length = size;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= last - 1; j++){
      if(j >= start && j <= last){
        std::cout << " * "; 
      }else{
        std::cout << "   ";
      }
    }
    std::cout << std::endl;
    start--;
    last++;
    size--;
  }
}

void Drawing::diamond(int size){
  int max = std::abs(size / 2);
  int first = max;
  int last = max;
  bool decrement = false;
  for(int i = 0 ; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      
      if(first == 0){
        decrement = true;
      };

      if(j >= first && j <= last){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      };
    };
    if(decrement == false){
      first--;
      last++;
    }else{
      first++;
      last--;
    };
    std::cout << std::endl;
  };
};

void Drawing::house(int size){
  int max = std::abs(size / 2);
  int first = max;
  int last = max;
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j >= first && j <= last){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      };
    };
    first--;
    last++;
    std::cout << std::endl;
  };
};

void Drawing::rectangle(int size){
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      std::cout << " * ";
    }
    std::cout << std::endl;
  }
}

void Drawing::outer_rectangle(int size){
  for(int i = 0; i <= size - 1; i++){
    for(int j = 0; j <= size - 1; j++){
      if(j == 0 || j == size - 1 || i == 0 || i == size - 1){
        std::cout << " * ";
      }else{
        std::cout << "   ";
      };
    };
    std::cout << std::endl;
  };
};
