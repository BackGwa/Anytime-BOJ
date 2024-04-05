fun main() {
    var w = arrayOf("ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ")
    var s = readLine()!!
    var result = 0

    for (i in s.indices) {
        for (j in w) {
            if (j.contains(s[i])) {
                result += w.indexOf(j) + 3
            }
        }
    }
    
    print(result)
}