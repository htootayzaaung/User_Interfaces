//
// Created by twak on 07/10/2019.
//

#include "responsive_layout.h"
#include "responsive_label.h"
#include <QScrollArea>
#include <iostream>

//using namespace std;

// you should probably make extensive changes to this function
void ResponsiveLayout::setGeometry(const QRect &r /* our layout should always fit inside r */ ) {

    QLayout::setGeometry(r);

    /*******************    GLOBAL_VARIABLES    *******************/

    //Initializing global-counter variables for specific widgets and their respective starting positions

    int count_800kSR = 0;               //global counter-variable for "kSearchResult" when "r.width() < 800"
    int x_800kSR = r.x() + 6;           //starting x-coordinate for "kSearchResult" when "r.width() < 800" is 6
    int y_800kSR = r.y() + 60;          //starting y-coordinate for "kSearchResult" when "r.width() < 800" is 60

    int count_1280kSR = 0;              //global counter-varaible for "kSearchResult" when "r.width >= 800"
    int x_1280kSR = r.x() + 80;         //starting x_coordinate for "kSearchResult" when "r.width() >= 800" is 80
    int y_1280kSR = r.y() + 76;         //starting y_coordinate for "kSearchResult" when "r.width() >= 800" is 76

    int count_800kRT = 0;               //global counter-variable for "kResultText" when "r.width() < 800"
    int x_800kRT = r.x() + 6;           //starting x-coordinate for "kResultText" when "r.width() < 800" is 6
    int y_800kRT = r.y() + 146;         //starting y-coordinate for "kResultText" when "r.width() < 800" is 146

    int count_1280kRT = 0;              //global counter-variable for "kResultText" when "r.width() >= 800"
    int x_1280kRT = r.x() + 80;         //starting x-coordinate for "kResultText" when "r.width() >= 800" is 80
    int y_1280kRT = r.y() + 189;        //starting y-coordinate for "kResultText" when "r.width() >= 800" is 189

    /****************   END_OF_GLOBAL_VARIABLES     ****************/

    // for all the Widgets added in ResponsiveWindow.cpp
    for (int i = 0; i < list_.size(); i++)
    {
        QLayoutItem *o = list_.at(i);

        try {
            // cast the widget to one of our responsive labels
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());
            QScrollArea *label2 = dynamic_cast<QScrollArea *>(o->widget());

            if (label2 != NULL)
            {
             label2->setGeometry(r);
            }

            else if (label == NULL) // null: cast failed on pointer
                std::cout << "warning, unknown widget class in layout" << std::endl;


            else if (label->text() == kNavTabs )
            {
                if (r.width() < 800)    //kNavTabs_SMALL
                {
                    label->setGeometry(r.x(), r.y(), r.width(), 30);    //positions at (0, 0) dimensions: r.width()x30
                }
                else if (r.width() >= 800)      //kNavTabs_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.x(), r.y(), r.width(), 40);    //positions at (0, 0) dimensions: r.width()x40
                }
            }

            else if (label->text() == kHomeLink)
            {
                if (r.width() < 800)    //kHomeLink_SMALL
                {
                    label->setGeometry(r.x() + 2, 5 + r.y(), 60, 20);       //positions at (2, 5) dimensions: 60x20
                }
                else if (r.width() >= 800)      //kHomeLine_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.x() + 2, 5 + r.y(), 60, 30);       //positions at (2, 50 dimensions: 60x30
                }
            }

            else if (label->text() == kSignIn)
            {
                if (r.width() < 800)    //kSignIn_SMALL
                {
                    label->setGeometry(r.width() - 109 + r.x(), r.y() + 5, 60, 20);     //positions at (r.width() - 109, 5) dimensions: 60x20
                }
                else if (r.width() >= 800 && r.width() < 1024)      //kSignIn_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 104 + r.x(), r.y() + 5, 60, 30);     //positions at (r.width() - 104, 5) dimensions: 60x30
                }
                else if (r.width() >= 1024)     //kSignIn_LARGE
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 42, 60, 30);     //positions at (r.width() - 62, 42) dimensions: 60x30
                }
            }


            else if (label->text() == kMenu)
            {
                if (r.width() < 800)    //kMenu_SMALL
                {
                    label->setGeometry(r.width() - 47 + r.x(), r.y() + 5, 45, 20);      //positions at (r.width() - 47, 5) dimensions 45x20
                }
                else if (r.width() >= 800)      //kMenu_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 42 + r.x(), r.y() + 5, 40, 30);      //positions at (r.widht() - 42, 5) dimensions 40x30
                }
            }


            //kLanguage_MEDIUM_TO_LARGE
            else if (label->text() == kLanguage && r.width() >= 800)
            {
                label->setGeometry(r.x() + 116, r.y() + 5, 70, 30);     //positions at (116, 5) dimensions: 70x30
            }


            //kRegion_MEDIUM_TO_LARGE
            else if (label->text() == kRegion && r.width() >= 800)
            {
                label->setGeometry(r.x() + 64, r.y() + 5, 50, 30);      //positions at (64, 5) dimensions: 50x30
            }


            else if (label->text() == kSearchText)
            {
                if (r.width() < 800)    //kSearchText_SMALL
                {
                    label->setGeometry(r.x() + 2, r.y() + 32, r.width() - 115, 20);
                }
                else if (r.width() >= 800 && r.width() < 1024)      //kSearchText_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.x() + 2, r.y() + 42, r.width() - 190, 30);     //positions at (2, 42) dimensions: (r.width() - 190)x30
                }
                else if (r.width() >= 1024)     //kSearchText_LARGE
                {
                    label->setGeometry(r.x() + 710, r.y() + 5, r.width() - 800, 30);    //positions at (710, 5) dimensions: (r.width() - 800)x30
                }
            }

            else if (label->text() == kSearchButton)
            {
                if (r.width() < 800)    //kWishList_SMALL
                {
                    label->setGeometry(r.width() - 110 + r.x(), r.y() + 32, 45, 20);    //positions at (r.width() - 110, 32) dimensions: 45x20
                }
                else if (r.width() >= 800 && r.width() < 1024)      //kWishList_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 185 + r.x(), r.y() + 42, 45, 30);    //positions at (r.width() - 185, 42) dimensions: 45x30
                }
                else if (r.width() >= 1024)     //kWishList_LARGE
                {
                    label->setGeometry(r.width() - 89 + r.x(), r.y() + 5, 45, 30);      //positions at (r.width() - 89, 5) dimensions: 45x30
                }
            }

            else if (label->text() == kWishlist)
            {
                if (r.width() < 800)    //kWishList_SMALL
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.y() + 55, 68, 15);     //positons at (r.width() - 70, 55) dimensions: 68x15
                }
                else if (r.width() >= 800 && r.width() < 1024)      //kWishList_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 137 + r.x(), r.y() + 42, 73, 30);    //positions at (r.width() - 137, 42) dimensions: 73x30
                }
                else if (r.width() >= 1024)     //kWishList_LARGE
                {
                    label->setGeometry(r.width() - 214 + r.x(), r.y() + 42, 73, 30);    //positions at (r.width() - 214, 42) dimensions: 73x30
                }
            }


            else if (label->text() == kSearchOptions)
            {
                if (r.width() < 800)    //kSearchOptions_SMALL
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.y() + 75, 68, r.height() - 100);   //positions at (r.width() - 70, 75), Right-Hand-side, dimensions: 68x(r.height() - 100)
                }
                else if (r.width() >= 800)      //kSearchOptions_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.x() + 2, r.y() + 75, 68, r.height() - 100);                //positions at (2, 75) , Left-Hand-side, dimensions: 68x(r.height()-100)
                }
            }


            else if (label->text() == kShoppingBasket)
            {
                if (r.width() < 800)    //kShoppingBasket_SMALL
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 32, 60, 20);                 //positions at (r.width() - 62, 32), Right-Hand-side, dimensions: 60x20
                }
                else if (r.width() >= 800 && r.width() < 1024)      //kShoppingBasket_Medium
                {
                    label->setGeometry(r.width() - 62 + r.x(), r.y() + 42, 60, 30);                 //positions at (r.width() - 62. 42), Right-Hand-side, dimensions: 60x30
                }
                else if (r.width() >= 1024)     //kShoppingBasket_LARGE
                {
                    label->setGeometry(r.width() - 138 + r.x(), r.y() + 42, 73, 30);                //positions at (r.width() - 138, 42), Right-Hand-side, dimensions: 73x30
                }
            }

            else if (label->text() == kSearchBackward)
            {
                if (r.width() < 800)    //kSearchBackward_SMALL
                {
                    label->setGeometry(r.width() - 70 + r.x(), r.height() + r.y() - 20, 30, 15);    //positions at (r.width() - 70, r.height() - 20), Right-Hand-side, dimensions: 30x15
                }
                else if (r.width() >= 800)      //kSearchBackward_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 123 + r.x(), r.height() - r.y() - 20, 40, 15);   //positions at (r.width() - 123, r.height() - 30), Right-Hand-side, dimensions: 40x15
                }
            }



            else if (label->text() == kSearchForward)
            {
                if (r.width() < 800)    //kSearchForward_SMALL
                {
                    label->setGeometry(r.width() - 35 + r.x(), r.height() + r.y() - 20, 30, 15);    //positions at (r.width() - 35, r.height() - 20), Right-Hand-side, dimensions: 30x15
                }
                else if (r.width() >= 800)      //kSearchForward_MEDIUM_TO_LARGE
                {
                    label->setGeometry(r.width() - 43 + r.x(), r.height() - r.y() - 20, 40, 15);    //positions at (r.width() - 43, r.height() - 20), Right-Hand-side, dimensions: 40x15
                }
            }


            //kAdvert_MEDIUM_TO_LARGE
            else if (label->text() == kAdvert && r.width() >= 800)
            {
                label->setGeometry(r.width() - 122 + r.x(), r.y() + 75, 120, r.height() - 100);     //positions at (r.width() - 112, 75), Right-Hand-side, dimensions: 120x(r.height() - 100)
            }


            //kSearchResult_SMALL
            else if (label->text() == kSearchResult && r.width() < 800)
            {
                count_800kSR++;     //counter increments whenever this widget is found in the "ResponsiveLabel"

                if (count_800kSR == 1)
                {
                    label->setGeometry(x_800kSR, y_800kSR, 90, 115);     //manually positions the first widget at (6, 60) with dimensions 110x135
                }

                else if (count_800kSR > 1)
                {
                    x_800kSR = x_800kSR + 103;      //increases width-gap by 103 units to the right

                    if (x_800kSR + 160 > r.width() - 20)    //validates that the new x-coordinate exceeds 20 units to the right
                    {
                        y_800kSR = y_800kSR + 159;  //increases width-gap by 159 units to the right
                        x_800kSR = r.x() + 6;       //pushes the widget 6 units to the right

                        if (y_800kSR + 70 < r.height() - 74)                    //validates that new y-coordinate exceeds roughly 74 units above the window
                        {
                            label->setGeometry(x_800kSR, y_800kSR, 90, 115);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                        else
                        {
                            label->setGeometry(x_800kSR, y_800kSR, 0, 0);       //hides the widget
                        }
                    }
                    else
                    {
                        if (y_800kSR + 70 > r.height() - 74)                    //validates that new y-coordinate exceeds roughly 74 units below the window
                        {
                            label->setGeometry(x_800kSR, y_800kSR, 0, 0);       //hides the widget
                        }
                        else
                        {
                            label->setGeometry(x_800kSR, y_800kSR, 90, 115);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                    }
                }
            }


            //kResultText_SMALL
            else if (label->text() == kResultText && r.width() < 800)
            {
                count_800kRT++; //counter increments whenever this widget is found in the "ResponsiveLabel"

                if (count_800kRT == 1)
                {
                    label->setGeometry(x_800kSR, y_800kSR + 119, 90, 30);   //manually positions the first widget at (6, 179) with dimensions 90x30
                }

                else if (count_800kRT > 1)
                {
                    x_800kRT = x_800kRT + 103;  //increases width-gap by 103 units to the right

                    if (x_800kRT + 160 > r.width() - 20)    //validates that the new x-coordinate exceeds 20 units to the right
                    {
                        y_800kRT = y_800kRT + 159;      //increases height-gap by 159 units below
                        x_800kRT = r.x() + 6;           //pushes the widget 6 units to the right

                        if (y_800kRT + 60 < r.height() - 10)                        //validates that new y-coordinate exceeds roughly 10 units above the window
                        {
                            label->setGeometry(x_800kRT, y_800kRT + 33, 90, 30);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                        else
                        {
                            label->setGeometry(x_800kRT, y_800kRT, 0, 0);       //hides the widget
                        }
                    }
                    else
                    {
                        if (y_800kRT + 60 > r.height() - 10)                    //validates that new y-coordinate exceeds roughly 10 units below the window
                        {
                            label->setGeometry(x_800kRT, y_800kRT, 0, 0);       //hides the widget
                        }
                        else
                        {
                            label->setGeometry(x_800kRT, y_800kRT + 33, 90, 30);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                    }
                }
            }



            //kSearchResult_MEDIUM_TO_LARGE
            else if (label->text() == kSearchResult && r.width() >= 800)
            {
                count_1280kSR++;    //counter increments whenever this widget is found in the "ResponsiveLabel"

                if (count_1280kSR == 1)
                {
                    label->setGeometry(x_1280kSR, y_1280kSR, 110 , 135);      //manually positions the first widget at (80, 76) with dimensions 110x135
                }

                else if (count_1280kSR > 1)
                {
                    x_1280kSR = x_1280kSR + 124;    //increases width-gap by 124 units to the right

                    if (x_1280kSR + 163 > r.width() - 80)   //validates that the new x-coordinate exceeds 80 units to the right
                    {
                        y_1280kSR = y_1280kSR + 190;    //increases height-gap by 190 units below
                        x_1280kSR = r.x() + 80;         //pushes the widget 80 units to the right

                        if (y_1280kSR + r.height() * 0.15 + 10 < r.height() - 113)  //validates that new y-coordinate is roughly 113 units above window
                        {
                            label->setGeometry(x_1280kSR, y_1280kSR, 110, 135);     //postions the widget in new (x, y) coordinates with the same dimension
                        }
                        else
                        {
                            label->setGeometry(x_1280kSR, y_1280kSR, 0, 0);         //hides the widget
                        }
                    }
                    else
                    {
                        if (y_1280kSR + r.height() * 0.15 + 10 > r.height() - 113)  //validates that new y-coordinate exceeds roughly 113 below the window
                        {
                            label->setGeometry(x_1280kSR, y_1280kSR, 0, 0);         //hides the widget
                        }
                        else
                        {
                            label->setGeometry(x_1280kSR, y_1280kSR, 110, 135);     //positions the widget in new (x, y) coordinates with the same dimension
                        }
                    }
                }
            }


            //kResultText_MEDIUM_TO_LARGE
            else if (label->text() == kResultText && r.width() >= 800)
            {
                count_1280kRT++;    //counter increments whenever this widget is found in the "ResponsiveLabel"

                if (count_1280kRT == 1)
                {
                    label->setGeometry(x_1280kRT, r.y() + 215, 110, 35);       //manually positions the first widget at (80, 215) with dimensions 110x135
                }
                else if (count_1280kRT > 1)
                {
                    x_1280kRT = x_1280kRT + 124;    //increases width-gap by 124 units to the right

                    if (x_1280kRT + 163 > r.width() - 80)   //validates that the new x-coordinate exceeds 80 units to the right
                    {
                        y_1280kRT = y_1280kRT + 190;    //increases height-gap by 190 units below
                        x_1280kRT = r.x() + 80;         //pushes the widget 80 units to the right

                        if (y_1280kRT + r.height() * 0.15 + 10 < r.height())    //validates that new y-coordinate dooes not exceed below the window
                        {
                            label->setGeometry(x_1280kRT, y_1280kRT + 25, 110,  35);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                        else
                        {
                            label->setGeometry(x_1280kRT, y_1280kRT, 0, 0);     //hides the widget
                        }
                    }
                    else
                    {
                        if (y_1280kRT + r.height() * 0.15 + 10 > r.height())    //validates that new y-coordinate exceeds below the window
                        {
                            label->setGeometry(x_1280kRT, y_1280kRT, 0, 0);     //hides the widget
                        }
                        else
                        {
                            label->setGeometry(x_1280kRT, y_1280kRT + 25, 110,  35);    //positions the widget in new (x, y) coordinates with the same dimension
                        }
                    }
                }
            }

            /****************************************          UI_DESIGN_DECISIONS     ****************************************
            ______________
            kSearchResult:
            ______________

            _There are two fixed sizes for "kSearchResult": one is when "r.width() < 800" and another is when "r.width() >= 800"

            _The reason why their sizes are made fixed is if the "r.width()" increases by 35% and if their width increases by 35%
            if they were dynamic, "r.height()" is clearly not increasing, thus the integrity of the image that represents
            "kSearchResult" will not be preserved thus it their widths will be disproportionately large.

            _The similar principle applies when changes occurr in "r.height()" - height of the window.

            ____________
            kResultText:
            ____________

            _There are also two fixed sizes for "kResultText" for the same conditions for the same reasons.

            _width increases dynamically

            ________
            kAdvert:
            ________

            _"kAdvert" will only be shown when "r.width() >= 800" the user may find it irritating to see the advert if the width
            of the window is small. Thus, it has been replaced with "kSearchOptions" when "r.width() < 800"

            _It also goes all the way to the bottom, accomodating more space for ads as the height of the window increases.

            _height increases dynamically

            ____________
            kSearchText:
            ____________

            _"kSearchText" has been moved to the top when "r.width() >= 800", in such cases, "kNavTabs" has more space to
            accomodate "kSearchText".

            _The width increases proportionately to "r.width()" which makes it more visually appealing for any window size.

            ______
            kHome:
            ______

            _Positioned at top-right so that it is the first thing the user see when they open the app.

            _It is 10 units smaller in height when "r.width() < 800", this is to make better use of space. The same thing
            applies to "kNavTabs", "kSignIn", "kBasket", "kWishList", "kSearchText", "kSearchButton" and "kMenu"

            _______________
            kSearchOptions:
            _______________

            _Assuming that the app holds the information of a wide variety of product-categories and it contains a feature,
            where it filters "kSearchResult", it's goes all the way to the bottom. With increasing number of filter options
            as the height of the window increases.

            _height increases dynamically

            ______________________
            2 New buttons created:
            ______________________

            _"kRegion" and "kLanguage" enables the user to quickly change the region and language of the app.

            _It is assumed that "kMenu" contains the option to change the language and the region if the size of the window
            were to be smaller.

            This means that if "r.width() >= 800" this features will appear outside of "kMenu" and thus, more user-friendly,
            since "kNavTabs" has also greater space to accomodate for these 2 buttons.


            *******************************************     END_OF_UI_DESIGN_DECISIONS  **************************************/


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
