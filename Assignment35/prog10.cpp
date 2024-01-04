#include <iostream>
#include <vector>
#include <list>
#include <utility>

template <typename Key, typename Value>
class HashTable {
private:
    static const int TABLE_SIZE = 10; // Adjust the size based on your needs

    std::vector<std::list<std::pair<Key, Value>>> table;

public:
    HashTable() : table(TABLE_SIZE) {}

    // Hash function to determine the index
    int hashFunction(const Key& key) const {
        // Example hash function (you can replace this with a better one)
        return std::hash<Key>{}(key) % TABLE_SIZE;
    }

    // Insert a key-value pair into the hash table
    void insert(const Key& key, const Value& value) {
        int index = hashFunction(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                std::cerr << "Duplicate key: " << key << ". Not inserted." << std::endl;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    // Search for a value based on a key
    bool search(const Key& key, Value& result) const {
        int index = hashFunction(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                result = pair.second;
                return true;
            }
        }
        return false;
    }

    // Remove a key-value pair from the hash table
    void remove(const Key& key) {
        int index = hashFunction(key);
        auto& chain = table[index];
        chain.remove_if([key](const auto& pair) { return pair.first == key; });
    }
};

int main() {
    // Example usage of the HashTable
    HashTable<std::string, int> myHashTable;

    myHashTable.insert("one", 1);
    myHashTable.insert("two", 2);
    myHashTable.insert("three", 3);

    int value;
    if (myHashTable.search("two", value)) {
        std::cout << "Value for key 'two': " << value << std::endl;
    } else {
        std::cout << "Key 'two' not found." << std::endl;
    }

    myHashTable.remove("two");

    if (myHashTable.search("two", value)) {
        std::cout << "Value for key 'two' after removal: " << value << std::endl;
    } else {
        std::cout << "Key 'two' not found after removal." << std::endl;
    }

    return 0;
}
