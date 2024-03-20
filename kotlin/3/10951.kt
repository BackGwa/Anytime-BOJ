fun main() {
    while (true) {
        var x = readLine()
        if (x == null)
            break
        var y = x.split(" ").map { it.toInt() }
        println(y[0] + y[1])
    }
}