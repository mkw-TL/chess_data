// append to header part of the html
import LichessPgnViewer from "/home/joeh/Documents/chess_project/chess_data/node_modules/lichess-pgn-viewer/dist/main";


document.addEventListener("DOMContentLoaded", function(event){
	let domElements = document.getElementsByTagName("h2")

	console.log(domElements)

	let pgn_str = domElements[0].innerText

	console.log(pgn_str)

	domElements[0].style.display = "none";

	const lpv = LichessPgnViewer(domElements, {
		pgn: pgn_str,
	});
});
