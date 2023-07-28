con <- RPostgres::dbConnect(RPostgres::Postgres(),dbname = 'JoeH', 
                 host = 'localhost', # i.e. 'ec2-54-83-201-96.compute-1.amazonaws.com'
                 port = 5432, # or any other port specified by your DBA
                 user = 'JoeH',
                 password = 'a')
library(RPostgres)
RPostgres::dbListTables(con)
dbWriteTable(con, "mtcars", mtcars)
dbListTables(con)
dbListFields(con, "mtcars")
dbReadTable(con, "mtcars")
res <- dbSendQuery(con, "SELECT * FROM mtcars WHERE cyl = 4")
dbFetch(res)
dbClearResult(res)
library(dbplyr)
library(dplyr)
library(DBI)
translate_sql(case_when(x > 1 ~ "big", y < 2 ~ "small"), con = con)
dbplyr::db_connection_describe(con)
con %>%
    tbl("mtcars") %>%
    filter(cyl > 2) %>%
    select(mpg:hp) %>%
    head(10) %>%
    show_query()

con %>%
    tbl("mtcars") %>%
    filter(cyl > 2) %>%
    select(mpg:hp) %>%
    head(10)

db_drop_table(con=con, table="mtcars")
tbl_name <- "mtcars"
DBI::dbGetQuery(conn = con, paste("DROP TABLE", tbl_name))
dbListTables(con)

test_data <- dplyr::tbl(con, "test_import")
test_data %>%
    select() %>%
    filter() %>%
    group_by() %>%
    summarize() %>%
    arrange()
    
    
dbDisconnect(con)

library(reticulate)
dbWriteTable
