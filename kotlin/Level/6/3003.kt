fun main() {
    var x = readLine()!!.split(" ").map { it.toInt() }
    var y = arrayOf(1, 1, 2, 2, 2, 8) 

    for (i in 0..5) {
        print("${(x[i] - y[i]) * -1} ")
    }
}