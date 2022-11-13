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
    int result_count = 0;
    int move_right = r.x() + 5;
    int move_down = r.y() + 75;

    // for all the Widgets added in ResponsiveWindow.cpp
    for (int i = 0; i < list_.size(); i++) {

        QLayoutItem *o = list_.at(i);

        try {
            // cast the widget to one of our responsive labels
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());

            if (label == NULL) // null: cast failed on pointer
                std::cout << "warning, unknown widget class in layout" << std::endl;

            /*DEFAULT*/

            else if (label->text() == kNavTabs ) // headers go at the top
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.x(), r.y(), r.width(), 30);
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.x(), r.y(), r.width(), 40);
                }
            }


            else if (label->text() == kHomeLink)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.x() + 2, 5 + r.y(), 60, 20);
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.x() + 2, 5 + r.y(), 60, 30);
                }
            }


            else if (label->text() == kSignIn)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 109 + r.x(), r.y() + 5, 60, 20);
                }
                else if (r.width() >= 500 && r.width() < 1024)
                {
                    label->setGeometry(r.width() - 104 + r.x(), r.y() + 5, 60, 30);
                }
                else if (r.width() >= 1024)
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 42, 60, 30);
                }

            }

            else if (label->text() == kMenu)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 47 + r.x(), r.y() + 5, 45, 20);
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.width() - 42 + r.x(), r.y() + 5, 40, 30);
                }
            }

            else if (label->text() == kLanguage && r.width() >= 500)
            {
                label->setGeometry(r.x() + 116, r.y() + 5, 70, 30);
            }


            else if (label->text() == kRegion && r.width() >= 500)
            {
                label->setGeometry(r.x() + 64, r.y() + 5, 50, 30);
            }


            else if (label->text() == kSearchText)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.x() + 2, r.y() + 32, r.width() - 115, 20);
                }
                else if (r.width() >= 500 && r.width() < 1024)
                {
                    label->setGeometry(r.x() + 2, r.y() + 42, r.width() - 190, 30);
                }
                else if (r.width() >= 1024)
                {
                    label->setGeometry(r.x() + 710, r.y() + 5, r.width() - 800, 30);
                }
            }


            else if (label->text() == kSearchButton)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 110 + r.x(), r.y() + 32, 45, 20);
                }
                else if (r.width() >= 500 && r.width() < 1024)
                {
                    label->setGeometry(r.width() - 185 + r.x(), r.y() + 42, 45, 30);
                }
                else if (r.width() >= 1024)
                {
                    label->setGeometry(r.width() - 89 + r.x(), r.y() + 5, 45, 30);
                }
            }


            else if (label->text() == kWishlist)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.y() + 55, 68, 15);
                }
                else if (r.width() >= 500 && r.width() < 1024)
                {
                    label->setGeometry(r.width() - 137 + r.x(), r.y() + 42, 73, 30);
                }
                else if (r.width() >= 1024)
                {
                    label->setGeometry(r.width() - 214 + r.x(), r.y() + 42, 73, 30);
                }
            }


            else if (label->text() == kSearchOptions)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.y() + 75, 68, r.height() - 100);   //100
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.x() + 2, r.y() + 75, 68, r.height() - 100);
                }
            }

            else if (label->text() == kShoppingBasket)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 32, 60, 20);
                }
                else if (r.width() >= 500 && r.width() < 1024)
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 42, 60, 30);
                }
                else if (r.width() >= 1024)
                {
                    label->setGeometry(r.width() - 138 + r.x(), r.y() + 42, 73, 30);
                }
            }

            else if (label->text() == kSearchBackward)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.height() + r.y() - 20, 30, 15);
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.width() - 350 + 45 + r.x(), r.height() - r.y() - 20, 40, 15);
                }

            }

            else if (label->text() == kSearchForward)
            {
                if (r.width() < 500)
                {
                    label->setGeometry(r.width() - 35 + r.x(), r.height() + r.y() - 20, 30, 15);
                }
                else if (r.width() >= 500)
                {
                    label->setGeometry(r.width() - 245 + r.x(), r.height() - r.y() - 20, 40, 15);
                }
            }

            else if (label->text() == kAdvert && r.width() > 500)
            {
                label->setGeometry(r.width() - 122 + r.x(), r.y() + 75, 120, r.height() - 100);
            }



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
