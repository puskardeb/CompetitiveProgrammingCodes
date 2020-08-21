public class IteratorForCombination {
    char[] str;
    List<String> outer;
    int idx;

    public IteratorForCombination(String characters, int combinationLength) {
        str = characters.toCharArray();
        outer = new ArrayList<>();
        idx = 0;
        int n = str.length;
        for (int mask = 0; mask < (1 << n); ++mask) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < n; ++i) {
                if ((mask & (1 << i)) != 0) {
                    sb.append(str[i]);
                }
            }
            if (sb.length() == combinationLength)
                outer.add(sb.toString());
        }
        Collections.sort(outer);
        System.out.println(outer);
    }

    public String next() {
        StringBuilder sb = new StringBuilder();
        while (idx < outer.size()) {
            sb.append(outer.get(idx));
            ++idx;
            return sb.toString();
        }
        return sb.toString();
    }

    public boolean hasNext() {
        if (idx == outer.size())
            return false;
        return true;
    }
}

