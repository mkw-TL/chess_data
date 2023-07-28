#
# This is a Shiny web application. You can run the application by clicking
# the 'Run App' button above.
#
# Find out more about building applications with Shiny here:
#
#    http://shiny.rstudio.com/
#

library(shiny)
library(shinydashboard)

ui <- dashboardPage(
    dashboardHeader(title = "Basic dashboard"),
    dashboardSidebar(
        sidebarMenu(
            menuItem("Dashboard", tabName = "dashboard", icon = icon("dashboard")),
            menuItem("Widgets", tabName = "widgets", icon = icon("th"))
        )
    ),
    dashboardBody(
        tabItems(
            # First tab content
            tabItem(tabName = "dashboard",
                fluidRow(
                    box("plot_display", height = 250)),
                        
                    box(
                        title = "Controls",
                        sliderInput("slider", "Number of observations:", 1, 100, 50)
                    )
                )
            ),
            
            # Second tab content
            tabItem(tabName = "widgets",
                h2("Widgets tab content"),
                fluidRow(
                    box(
                        title = "Settings",
                        radioButtons("display", "What plot to show", c("grey", "steelblue"))
                    )
                )
            )
        )
    )


server <- function(input, output) {
    set.seed(122)
    histdata <- rnorm(500)
    to_show = c("plot1", "plot2")
    
    selected_plot <- reactive({
        if (input$display == "plot1") {
            return("plot1")
        } else {
            return("plot2")
        }
    })
    
    output$plot_display <- renderPlot({
        data <- histdata[seq_len(input$slider)]
        if (selected_plot() == "grey") {
            hist(data)
        } else {
            hist(data, col = "steelblue") 
        }
    })
}


shinyApp(ui, server)
