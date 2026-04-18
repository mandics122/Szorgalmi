#include <iostream>
#include <vector>

struct Pair {
  int a;
  int b;
};

void SortByA(std::vector<Pair>& data) {
  for (size_t i = 0; i < data.size(); ++i) {
    for (size_t j = 0; j + 1 < data.size(); ++j) {
      if (data[j].a > data[j + 1].a) {
        std::swap(data[j], data[j + 1]);
      }
    }
  }
}

void PrintSeparator() {
  std::cout << "===" << std::endl;
}

void PrintDivider() {
  std::cout << "---" << std::endl;
}

void PrintHeader() {
  std::cout << "Output:" << std::endl;
}

int ComputeValue(int a, int b) {
  if (a % 2 == 0) {
    if (b % 2 == 0) {
      return a * b;
    } else {
      return a + b;
    }
  } else {
    if (b % 2 == 0) {
      return a - b;
    } else {
      return a;
    }
  }
}

void PrintResults(const std::vector<Pair>& data) {
  for (const Pair& p : data) {
    int result = ComputeValue(p.a, p.b);
    std::cout << result << std::endl;
  }
}

void Process(std::vector<Pair>& data) {
  SortByA(data);
  PrintSeparator();
  PrintHeader();
  PrintDivider();
  PrintResults(data);
}

int main() {
  std::vector<Pair> data = {
      {5, 1},
      {2, 4},
      {3, 7},
      {1, 6},
      {4, 5}
  };

  Process(data);
  return 0;
}