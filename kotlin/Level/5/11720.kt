fun main() {
    var n = readLine()!!.toInt()
    var s = readLine()!!
    var result = 0

    for (i in 0..n - 1) {
        result += s[i].toString().toInt()
    }
    print(result)
}