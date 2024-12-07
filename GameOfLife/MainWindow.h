#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <wx/wx.h> 
#include "DrawingPanel.h"

class MainWindow : public wxFrame
{
public:
    // Constructor
    MainWindow()
        : wxFrame(nullptr, wxID_ANY, "Game of Life", wxPoint(0, 0), wxSize(200, 200))
    {
        drawingPanel = new DrawingPanel(this);
    }

    // Destructor
    ~MainWindow()
    {
    };

private:
    DrawingPanel* drawingPanel;
};

#endif // MAINWINDOW_H