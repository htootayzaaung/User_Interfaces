//
// Created by twak on 07/10/2019.
//

#include "responsive_layout.h"
#include "responsive_label.h"
#include <iostream>

//using namespace std;

// you should probably make extensive changes to this function
void ResponsiveLayout::setGeometry(const QRect &r /* our layout should always fit inside r */ ) {

    QLayout::setGeometry(r);

    // for all the Widgets added in ResponsiveWindow.cpp
    for (int i = 0; i < list_.size(); i++) {

        QLayoutItem *o = list_.at(i);

        try {
            // cast the widget to one of our responsive labels
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());

            if (label == NULL) // null: cast failed on pointer
                std::cout << "warning, unknown widget class in layout" << std::endl;
            
            /**************************************     NAV_BAR_ITEMS     **************************************/
            /***************************************     LARGEST_SIZE    ***************************************/

            else if (label->text() == kNavTabs ) // headers go at the top
                label->setGeometry(0+r.x(), 0+r.y(),r.width(), 40);

            else if (label->text() == kHomeLink)
                label->setGeometry(5 + r.x(), 5 + r.y(), 60, 30);

            else if (label->text() == kSearchText)
                label->setGeometry(r.width() - 367 + r.x(), r.y() + 5, 180, 30);

            else if (label->text() == kSearchButton)
                label->setGeometry(r.width() - 185 + r.x(), r.y() + 5, 45, 30);

            //sign-in button at the right of the search button
            else if (label->text() == kSignIn)
                label->setGeometry(r.width() - 135 + r.x(), r.y() + 5, 60, 30);

            //ShoppingBasket at the right top of the navigation bar
            else if (label->text() == kShoppingBasket)
                label->setGeometry(r.width() - 70 + r.x(), r.y() + 5, 60, 30);

            /******************************************    MAIN BODY   ******************************************/

            else if (label->text() == kAdvert)
                label->setGeometry(r.width() - 135 + r.x(), r.y() + 55, 120, 650);

            else if (label->text() == kSearchBackward)
                label->setGeometry(r.x() + 300, 650 + r.y(), 30, 30);

            else if (label->text() == kSearchForward)
                label->setGeometry(r.x() + 800, 650 + r.y(), 30, 30);

            /**************************************     END_OF_MAIN_BODY    *************************************/


            /************************************    END_OF_LARGEST_SIZE    *************************************/
            /***********************************     END_OF_NAV_BAR_ITEMS     ***********************************/

            // fixme: focus group did not like this behaviour for the search result element.
            else if (label->text() == kSearchResult )
                label->setGeometry(rand() %(r.width()-120)+r.x(),rand() %(r.height()-100)+40+r.y(), 60, 60);

            else // otherwise: disappear label by moving out of bounds
                label->setGeometry(-1, -1, 0, 0);

        }
        catch (std::bad_cast) {
            // bad_case: cast failed on reference...
            std::cout << "warning, unknown widget class in layout" << std::endl;
        }
    }
}

// following methods provide a trivial list-based implementation of the QLayout class
int ResponsiveLayout::count() const {
    return list_.size();
}

QLayoutItem *ResponsiveLayout::itemAt(int idx) const {
    return list_.value(idx);
}

QLayoutItem *ResponsiveLayout::takeAt(int idx) {
    return idx >= 0 && idx < list_.size() ? list_.takeAt(idx) : 0;
}

void ResponsiveLayout::addItem(QLayoutItem *item) {
    list_.append(item);
}

QSize ResponsiveLayout::sizeHint() const {
    return minimumSize();
}

QSize ResponsiveLayout::minimumSize() const {
    return QSize(320,320);
}

ResponsiveLayout::~ResponsiveLayout() {
    QLayoutItem *item;
    while ((item = takeAt(0)))
        delete item;
}
