fun main() {
    var n = readLine()!!.toInt()

    repeat(n) {
        var s = readLine()!!
        for (j: Int in 0 until s.length - 1) {
            if (s[j] != s[j + 1] && s[j] in s.substring(j + 1)) {
                n--
                break
            }
        }
    }

    print(n)
}