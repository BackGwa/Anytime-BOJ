fun main() {
    var x = readLine()!!
    var result = 1

    for (i: Int in 0..(x.length - 1)) {
        if (x[i] != x[(x.length - 1) - i])
            result = 0
    }

    print(result)
}