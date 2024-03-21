fun main() {
    var x = readLine()
    var arr = readLine()!!.split(" ").map { it.toInt() }

    print("${arr.min()} ${arr.max()}")
}