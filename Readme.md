# 🧮 Vector Operations in C++

This is a repository containing basic vector operations implemented in C++. The vector data structure used here is the `std::vector` container provided by the C++ Standard Library.

## 🔧 Usage

### Creating a Vector

To create a new vector, you can use the `std::vector` constructor, which takes an optional initial size as an argument. For example, to create a vector with 5 elements, you can use:

```c++
#include <vector>

std::vector<int> myVector(5);
```

### Adding Elements to the Vector

To add elements to the end of the vector, you can use the `push_back` method. For example, to add the integer value `42` to the end of `myVector`, you can use:

```c++
myVector.push_back(42);
```

### Retrieving the Size of the Vector

To retrieve the current size of the vector, you can use the `size` method. For example, to retrieve the size of `myVector`, you can use:

```c++
std::cout << "Size of myVector: " << myVector.size() << std::endl;
```

### Removing Elements from the Vector

To remove the last element from the vector, you can use the `pop_back` method. For example, to remove the last element from `myVector`, you can use:

```c++
myVector.pop_back();
```


## 📝 Contributing

Contributions to this repository are welcome. To contribute, please fork the repository, make your changes, and submit a pull request.

## 📄 License

This repository is licensed under the MIT License. See [LICENSE](LICENSE) for more information.