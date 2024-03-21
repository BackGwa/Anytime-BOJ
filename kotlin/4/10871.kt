fun main() {
    var x = readLine()!!.split(" ").map { it.toInt() }
    var arr = readLine()!!.split(" ").map { it.toInt() }

    for (i: Int in arr) {
        if (i < x[1]) print("${i} ")
    }

}