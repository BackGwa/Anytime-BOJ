fun main() {
    val namogi = mutableSetOf<Int>()

    for (i: Int in 1..10) {
        var x = readLine()!!.toInt() % 42
        namogi.add(x)
    }

    print(namogi.size)
}