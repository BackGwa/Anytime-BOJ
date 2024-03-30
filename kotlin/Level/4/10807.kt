fun main() {
    var t = readLine()!!.toInt()
    var arr = readLine()!!.split(" ").map { it.toInt() }
    var x = readLine()!!.toInt()
    var result = 0

    for (i: Int in arr) {
        if (i == x) {
            result++
        }
    }

    print(result)
}