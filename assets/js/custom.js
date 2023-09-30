console.log("here")

import LichessPgnViewer from 'lichess-pgn-viewer'
console.log("here2")
document.addEventListener("DOMContentLoaded",() => {
    let domElements = document.getElementsByTagName("h2")
    
    console.log("here3")
    console.log(domElements)
    
    let pgn_str = domElements[0].innerText
    console.log("here3")
  
  console.log(pgn_str)
  
  domElements[0].style.display = "none";
  
  const lpv = LichessPgnViewer(domElements, {
    pgn: pgn_str,
  });
});