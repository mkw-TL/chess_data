import LichessPgnViewer from 'lichess-pgn-viewer'

document.addEventListener("DOMContentLoaded",() => {
  let domElements = document.getElementsByTagName("h2")
  
  console.log(domElements)
  
  let pgn_str = domElements[0].innerText
  
  console.log(pgn_str)
  
  domElements[0].style.display = "none";
  
  const lpv = LichessPgnViewer(domElements, {
    pgn: pgn_str,
  });
});