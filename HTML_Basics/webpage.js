let images = ["https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTsXrPCUEv9_HfWuQlneNhmn3JqlOn6KY7FtYnZL-UCb7LzGLN0eEUmMkBcnYBJ5iY75tM&usqp=CAU", "https://media.printables.com/media/prints/379601/images/3186795_43337aa0-44ef-443f-96fa-7691b747eb21/thumbs/inside/1280x960/png/dragonsteel.webp"]
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
function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "none"
        document.getElementById("shw"). innerHTML = "Show Stormlight Archive Spoilers"
    } else {
        document.getElementById("more").style.display = "block"
        document.getElementById("shw"). innerHTML = "Hide Spoilers"
    }
}