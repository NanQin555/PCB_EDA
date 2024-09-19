#include "Rectangle.hpp"
#include <QGraphicsSceneMouseEvent>
RectangleItem::RectangleItem(QGraphicsItem* parent) 
    : QGraphicsItem(parent), rect(-400,-300,800,600){}

QRectF RectangleItem::boundingRect() const {
    return rect;
}

void RectangleItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option,
                         QWidget* widget) {
    Q_UNUSED(option)
    Q_UNUSED(widget)
    painter->drawRect(rect);
}

void RectangleItem::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    lastPoint_ = event->pos();
    update();
}

void RectangleItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    prepareGeometryChange();
    rect = QRectF(lastPoint_, event->pos()).normalized();
    update();
}

void RectangleItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
}

