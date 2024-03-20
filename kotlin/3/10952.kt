fun main() {
    while (true) {
        var x = readLine()!!.split(" ").map { it.toInt() }
        if (x[0] == x[1] && x[0] == 0)
            break
        println(x[0] + x[1])
    }
}