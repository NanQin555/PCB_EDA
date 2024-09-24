class Capacitor : public Component {
public:
    Capacitor(QGraphicsItem *parent = nullptr) : Component(parent) {}

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override {
        Q_UNUSED(option)
        Q_UNUSED(widget)
        painter->drawRect(boundingRect().adjusted(0, 0, -10, 0));
        painter->drawRect(boundingRect().adjusted(0, 0, 10, 0));
    }
};