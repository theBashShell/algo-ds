class MyHashMap
{

public:
  /** Initialize your data structure here. */
  array<int, 1000001> h_map;
  MyHashMap()
  {
    fill(h_map.begin(), h_map.end(), -1);
  }

  /** value will always be non-negative. */
  void put(int key, int value)
  {
    h_map[key] = value;
  }

  /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
  int get(int key)
  {
    return h_map[key];
  }

  /** Removes the mapping of the specified value key if this map contains a mapping for the key */
  void remove(int key)
  {
    if (h_map[key] != -1)
      h_map[key] = -1;
  }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */