fun main() {
    var avg = hashMapOf(
        "A+" to 4.5, "A0" to 4.0,
        "B+" to 3.5, "B0" to 3.0,
        "C+" to 2.5, "C0" to 2.0,
        "D+" to 1.5, "D0" to 1.0,
        "F" to 0.0
    )

    var all = 0.0
    var result = 0.0

    for (o in 1..20) {
        var x = readLine()!!.split(" ")
        if (x[2] == "P") continue
        all += x[1].toDouble()
        result += x[1].toDouble() * avg[x[2]]!!.toDouble()
    }

    print(result / all)
}