fun main() {
    var k = Array(9, {List<Int>(9, { 0 })})
    var pos = Array(2, { 0 })
    var max = 0

    repeat(9) {
        k[it] = readLine()!!.split(" ").map { it.toInt() }
    }

    for (col in 0..8) {
        for (row in 0..8) {
            if (max <= k[col][row]) {
                pos[0] = col + 1
                pos[1] = row + 1
                max = k[col][row]
            }
        }
    }
    println(max)
    print("${pos[0]} ${pos[1]}")
}