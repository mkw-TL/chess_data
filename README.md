This contains my personal website (https://joeh.netlify.com) through the [bookdown](https://bookdown.org/) package. Utilizes Netlify to publish and Hugo to build. Currently CI/CD not implemented, as updates are scarce enough, and this forces me to keep a mental model of what each part does. This website also contains a shiny application (hosted on shinyapps.io) embedded as an iframe in the Rmd document.

Website contains my analysis of [lichess](https://database.lichess.org/) data (34GB compressed) for a month. Duckdb would have been the best way to implement this; currently uses Postgres. Parsing of the games using python (using the psycopg package to insert into Postgres), and analysis in R (using the dbplyr package).

Potentially reproducable via venv and renv functionality? Currently unsure if set up correctly or not.

Excellent books that aided this process:
- https://edwinth.github.io/ADSwR/index.html
- https://happygitwithr.com/index.html
- https://do4ds.com/
- https://arrow-user2022.netlify.app/hello-arrow.html
