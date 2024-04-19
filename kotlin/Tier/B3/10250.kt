fun main() {
    repeat(readLine()!!.toInt()) {
        var x = readLine()!!.split(" ").map { it.toInt() }
        var y = (x[2] % x[0]).toInt()
        var z = (x[2] / x[0]).toInt() + 1
        if (y == 0) {
            y = x[0]
            z -= 1
        }
        println("${y}${z.toString().padStart(2, '0')}")
    }
}