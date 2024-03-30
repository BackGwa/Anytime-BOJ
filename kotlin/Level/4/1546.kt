fun main() {
    var t = readLine()!!.toDouble()
    var s = readLine()!!.split(" ").map { it.toDouble() }
    var m = s.maxOf { it }
    print(s.sumOf { it / m * 100 } / t)
}
