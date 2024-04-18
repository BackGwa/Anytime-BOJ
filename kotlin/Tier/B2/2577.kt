fun main() {
    var m = 1

    repeat(3) {
        m *= readLine()!!.toInt()
    }

    for (i: Int in 0..9) {
        println(m.toString().count { it.toString() == i.toString() })
    }
}