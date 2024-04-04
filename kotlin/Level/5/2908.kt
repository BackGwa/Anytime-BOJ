fun main() {
    var (x, y) = readLine()!!.split(" ").map { it.reversed() }
    print(if (x > y) x else y)
}