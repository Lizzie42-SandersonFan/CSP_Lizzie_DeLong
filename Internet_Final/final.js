let goHereImages = ["https://www.colemanconcierge.com/wp-content/uploads/2023/11/Park-City-Utah-in-winter-via-Canva.jpg", "https://www.parkcityinformation.org/images/main-street-park-city.jpg", "https://gallery.streamlinevrs.com/units-gallery/00/07/D1/thumbnail_160744164.jpeg"]
// first image from Coleman Concierge, then Park City, then Summit Luxury Vacations
let count = 0
function changeImgOne(){
    if (count < goHereImages.length){
        document.getElementById("explain_img").src = goHereImages[count]
        count += 1
    } else {
        count = 0
        document.getElementById("explain_img").src = goHereImages[count]
    }
}

let foodImages = ["https://www.femalefoodie.com/wp-content/uploads/2019/06/five-5eeds-9.jpg", "https://images.squarespace-cdn.com/content/v1/6274079d047d971acb504c55/7c9fd062-63c2-493d-8ed5-4f902d8b9d6e/1.29.2022---Tupelo-173.jpg", "https://scene7.vailresorts.com/is/image/vailresorts/20230106_PC_Tingey_001:Categories?fmt=png-alpha&resMode=sharp2&w=429&h=369&wid=382&fit=constrain,1&dpr=on,2.625"]
// first image from Female Foodie, then Tupelo Park City, then Park City Mountain Resort
let i = 0
function changeImgThree(){
    if (i < foodImages.length){
        document.getElementById("food_img").src = foodImages[i]
        i += 1
    } else {
        i = 0
        document.getElementById("food_img").src = foodImages[i]
    }
}

let coolThingsImg = ["https://abodeparkcity.com/wp-content/uploads/2022/06/snowparkcity-768x511-1.jpg", "https://static1.thetravelimages.com/wordpress/wp-content/uploads/2022/10/Dog-sledding-in-park-city-Utah.JPG", "https://stayparkcity.com/wp-content/uploads/2015/05/ziplines.jpeg"]
// first image from Adobe Park City, then TheTravel, then Stay Park City
let counter = 0
function changeImgTwo(){
    if (counter < coolThingsImg.length){
        document.getElementById("neat_img").src = coolThingsImg[counter]
        counter += 1
    } else {
        counter = 0
        document.getElementById("neat_img").src = coolThingsImg[counter]
    }
}

function view(){
    if(document.getElementById("hidden_stuff").style.display === "block"){
        document.getElementById("hidden_stuff").style.display = "none"
        document.getElementById("button"). innerHTML = "Show More Info About Skiing"
    } else {
        document.getElementById("hidden_stuff").style.display = "block"
        document.getElementById("button"). innerHTML = "Show Less Info About Skiing"
    }
}