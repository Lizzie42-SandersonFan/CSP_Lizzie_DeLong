let goHereImages = ["https://www.colemanconcierge.com/wp-content/uploads/2023/11/Park-City-Utah-in-winter-via-Canva.jpg", "https://www.parkcityinformation.org/images/main-street-park-city.jpg", "https://gallery.streamlinevrs.com/units-gallery/00/07/D1/thumbnail_160744164.jpeg"]
let x = 0
function change() {
    if (x < goHereImages.length-1) {
        x += 1
    } else {
        x = 0
    }
    let imageThing=document.getElementById("explain_img")
    imageThing.src=goHereImages[x]
}
setInterval(change, 3000)

let foodImages = ["https://www.femalefoodie.com/wp-content/uploads/2019/06/five-5eeds-9.jpg", "https://images.squarespace-cdn.com/content/v1/6274079d047d971acb504c55/7c9fd062-63c2-493d-8ed5-4f902d8b9d6e/1.29.2022---Tupelo-173.jpg", "https://scene7.vailresorts.com/is/image/vailresorts/20230106_PC_Tingey_001:Categories?fmt=png-alpha&resMode=sharp2&w=429&h=369&wid=382&fit=constrain,1&dpr=on,2.625"]
let i = 0
function changeAgain() {
    if (i < foodImages.length-1) {
        i += 1
    } else {
        i = 0
    }
    let images=document.getElementById("food_img")
    images.src=foodImages[i]
}
setInterval(changeAgain, 3000)

let coolThingsImg = ["https://abodeparkcity.com/wp-content/uploads/2022/06/snowparkcity-768x511-1.jpg", "https://static1.thetravelimages.com/wordpress/wp-content/uploads/2022/10/Dog-sledding-in-park-city-Utah.JPG", "https://stayparkcity.com/wp-content/uploads/2015/05/ziplines.jpeg"]
let counter = 0
function changeImgThree(){
    if (counter < coolThingsImg.length){
        counter += 1
    } else {
        counter = 0
    }
    let image = document.getElementById("neat_img")
    image.src=coolThingsImg[i];
}
setInterval(changeImgThree, 3000)

function viewStuff(){
    if(document.getElementById("hidden_stuff").style.display === "block"){
        document.getElementById("hidden_stuff").style.display = "none"
        document.getElementById("button"). innerHTML = "Show More Info About Skiing"
    } else {
        document.getElementById("hidden_stuff").style.display = "block"
        document.getElementById("button"). innerHTML = "Show Less Info"
    }
}