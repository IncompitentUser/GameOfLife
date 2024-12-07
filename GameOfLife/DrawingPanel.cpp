#include "DrawingPanel.h"

wxBEGIN_EVENT_TABLE(DrawingPanel, wxPanel)
EVT_PAINT(DrawingPanel::OnPaint) 
wxEND_EVENT_TABLE()

// Constructor
DrawingPanel::DrawingPanel(wxWindow* parent)
    : wxPanel(parent), gridSize(10)
{
    this->SetBackgroundStyle(wxBG_STYLE_PAINT);
    context = nullptr;
}

// Destructor
DrawingPanel::~DrawingPanel()
{

}

void DrawingPanel::OnPaint(wxPaintEvent& event)
{
    wxAutoBufferedPaintDC dc(this);

    dc.Clear();

    context = wxGraphicsContext::Create(dc);
    if (!context) {
        return;
    }

    context->SetPen(*wxBLACK);
    context->SetBrush(*wxWHITE);

    const int cellSize = 15;

    for (int row = 0; row < gridSize; ++row) {
        for (int col = 0; col < gridSize; ++col) {
            int x = col * cellSize;
            int y = row * cellSize;

            // Draw the rectangle
            context->DrawRectangle(x, y, cellSize, cellSize);
        }
    }
}
