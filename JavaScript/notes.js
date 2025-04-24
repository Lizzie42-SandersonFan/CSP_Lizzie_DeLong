let images = ["https://uploads.coppermind.net/archive/20200105010217%21Bridge_Four_Badge.svg", "https://m.media-amazon.com/images/I/81pJXhRLdoL.jpg", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRTIOOIFFiujr-qojS_Pgiu-SoXWe7_i6pmvA&s", "https://uploads.coppermind.net/thumb/Inkspren_by_ms-marz.jpg/300px-Inkspren_by_ms-marz.jpg"]
let counter = 0

function change(){
    if (counter < images.length){
        document.getElementById("img").src = images[counter]
        counter += 1
    } else {
        counter = 0
        document.getElementById("img").src = images[counter]
    }
}

function hello(){
    let name = window.prompt("What is your name?", "Brando Sando")
    document.getElementById("title").innerHTML = "Hello "+ name + "!"
}
function hover(){
    document.getElementById("img").src = "https://m.media-amazon.com/images/I/81pJXhRLdoL.jpg"
}
function leave(){
    document.getElementById("img").src = "https://uploads.coppermind.net/archive/20200105010217%21Bridge_Four_Badge.svg"
}
function pop(){
    window.alert("Really, don't click that!")
}
function show(){
    document.getElementById("lost").style.display = "block"
}
function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "none"
        document.getElementById("shw"). innerHTML = "Show More"
    } else {
        document.getElementById("more").style.display = "block"
        document.getElementById("shw"). innerHTML = "Show Less"
    }
}