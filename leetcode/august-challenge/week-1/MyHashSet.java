/** Resolution by chaining implementation */
class MyHashSet {
    
    static class Set {
        List<Integer> list;
    }
    
    static Set[] set;
    static int size;
    
    public MyHashSet() {
        size = 12289;
        set = new Set[size + 1];
        Arrays.fill(set, null);
    }
    
    public void add(int key) {
        int bucket = key % size;
        if (set[bucket] == null) {
            set[bucket] = new Set();
            set[bucket].list = new ArrayList<>();
        }
        for (Integer i : set[bucket].list) {
            if (i == key) {
                return;
            }
        }
        set[bucket].list.add(key);
    }
    
    public void remove(int key) {
        int bucket = key % size;
        if (set[bucket] == null)    return;
        int n = set[bucket].list.size();
        for (int i = 0; i < n; ++i) {
            if (set[bucket].list.get(i) == key) {
                set[bucket].list.remove(i);
                break;
            }
        }
        
        if (set[bucket].list.size() == 0) {
            set[bucket] = null;
        }
    }
    
    public boolean contains(int key) {
        int bucket = key % size;
        if (set[bucket] == null)    return false;
        int pos = 0;
        int n = set[bucket].list.size();
        for (int i = 0; i < n; ++i) {
            if (set[bucket].list.get(i) == key) {
                return true;
            }
        }
        return false;
    }
}

/** Naive implementation */
/*class MyHashSet {

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
    
    public boolean contains(int key) {
        return set[key];
    }
}*/
