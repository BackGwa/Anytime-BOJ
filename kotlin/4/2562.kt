fun main() {
    var x = Array<Int>(10, {0})
    for (i: Int in 1..9) {
        x[i - 1] = readLine()!!.toInt()
    }
    var y = x.max()
    println("${y}\n${x.indexOf(y) + 1}")
}