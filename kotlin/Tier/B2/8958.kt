fun main() {
    for (o in 1..readLine()!!.toInt()) {
        var score = 0
        var x = 0

        for (i in readLine()!!) {
            if (i == 'X') x = 0
            else {
                x += 1
                score += x * 1
            }
        }
        println(score)
    }
}