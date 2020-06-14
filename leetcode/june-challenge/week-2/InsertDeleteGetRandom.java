class RandomizedSet {
    Random random;
    Map<Integer, Integer> map;
    List<Integer> list;
    /** Initialize your data structure here. */
    public RandomizedSet() {
        random = new Random();
        map = new HashMap<>();
        list = new ArrayList<>();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    public boolean insert(int val) {
        if (map.containsKey(val))   return false;
        list.add(val);
        map.put(val, list.size() - 1);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    public boolean remove(int val) {
        if (map.containsKey(val)) {
            int idx = map.get(val);
            if (idx < list.size() - 1) {
                int last = list.get(list.size() - 1);
                list.set(idx, last);
                map.put(last, idx);          
            }
            map.remove(val);
            list.remove(list.size() - 1);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    public int getRandom() {
        return list.get(random.nextInt(list.size()));
    }
}
