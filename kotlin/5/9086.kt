fun main() {
    var t = readLine()!!.toInt()
    var r = ""
    var s = ""
    
    for (o in 0 until t) {
        s = readLine()!!
        if (s.length == 0)
            r = s + s
        else
            r = s.substring(0, 1) + s.substring(s.length - 1, s.length)
        println(r)
    }
}