let goHereImages = ["https://www.colemanconcierge.com/wp-content/uploads/2023/11/Park-City-Utah-in-winter-via-Canva.jpg", "https://www.parkcityinformation.org/images/main-street-park-city.jpg", "https://gallery.streamlinevrs.com/units-gallery/00/07/D1/thumbnail_160744164.jpeg"]
// first image from Coleman Concierge, then Park City, then Summit Luxury Vacations
let count = 0
function changeImgOne(){
    if (counter < goHereImages.length){
        document.getElementById("explain_img").src = goHereImages[count]
        count += 1
    } else {
        count = 0
        document.getElementById("explain_img").src = goHereImages[count]
    }
}

let coolThingsImg = ["https://abodeparkcity.com/wp-content/uploads/2022/06/snowparkcity-768x511-1.jpg"]
// first image from Adobe Park City
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

let foodImages = ["https://www.femalefoodie.com/wp-content/uploads/2019/06/five-5eeds-9.jpg", "https://images.squarespace-cdn.com/content/v1/6274079d047d971acb504c55/7c9fd062-63c2-493d-8ed5-4f902d8b9d6e/1.29.2022---Tupelo-173.jpg", "https://www.google.com/search?sca_esv=6983e842059c9cf0&rlz=1CAJIKU_enUS1159&q=food+in+park+city&udm=2&fbs=ABzOT_CWdhQLP1FcmU5B0fn3xuWpIgVFCTcbZI9VMGzNoV0iOTPryHVyOUisUiQWwjZrW-xk89Qe_1K5AEHBJ0yd2fdHBICyXvoL4XEB5cYsiFdHOQ8MWUwWgv3blqouRjYlAm0NEYanfGN3fmyXzhM0sV-NgqfcmWuZvt93iZRK_5M0g2sxrlJtySQTEzYQvysQTIv-OjS3imd_xawahzHaN-nxnSzyZw&sa=X&sqi=2&ved=2ahUKEwitioWs7fOMAxW6KkQIHctrEaoQtKgLegQIGRAB&biw=1366&bih=599&dpr=1&safe=active&ssui=on#vhid=AfwIQAgqMLswLM&vssid=mosaic"]
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