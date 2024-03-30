fun main() {
    var solver = Array<Int>(31, {0})
    var x = 0
    for (i: Int in 1..28) {
        x = readLine()!!.toInt()
        solver[x] = 1;
    }
    for (i: Int in 1..30) {
        if (solver[i] == 0)
            println(i)
    }
}