#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>
#include <QPoint>
class RectangleItem: public QGraphicsItem {
public:
    RectangleItem(QGraphicsItem* parent=nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*) override;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
private:
    QRectF rect;
    QPointF lastPoint_;
};