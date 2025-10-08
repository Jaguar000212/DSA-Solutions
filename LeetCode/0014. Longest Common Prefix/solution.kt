class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        var prefix = strs.getOrElse(0) {""}
        for (str in strs) {
            if (prefix.isEmpty()) return ""
            val len = minOf(prefix.length, str.length)
            var j = 0
            for (i in 0 until len) {
                if(prefix[i] != str[i]) break
                j++
            }
            if (j == 0) return ""
            prefix = prefix.substring(0, j)
        }
        return prefix
    }
}