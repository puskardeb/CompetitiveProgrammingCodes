class MyHashSet {

    /** Initialize your data structure here. */
    boolean[] set;
    public MyHashSet() {
        final int size = 1000000;
        set = new boolean[size + 1];
        Arrays.fill(set, false);
    }
    
    public void add(int key) {
        set[key] = true;
    }
    
    public void remove(int key) {
        set[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
        return set[key];
    }
}
