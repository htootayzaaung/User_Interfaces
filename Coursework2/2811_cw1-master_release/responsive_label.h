//
// Created by twak on 14/10/2019.
//

#ifndef RESPONSIVELABEL_H
#define RESPONSIVELABEL_H


#include <QLabel>
#include <QString>
#include <map>

//using namespace std;

// Please add to, but DO NOT modify the existing constants in this file.
// label names that are displayed
const QString
        kHomeLink       = "home",
        kShoppingBasket = "basket",
        kSignIn         = "sign-in",
        kNavTabs        = "navigation tabs",
        kAdvert         = "advert",
        kSearchButton   = "search",
        kSearchResult   = "result",
        kResultText     = "text",
        kSearchText     = "search query",
        kSearchForward  = ">",
        kSearchBackward = "<",
        kSearchOptions  = "search\noptions",
        kWishlist       = "wish-list",
        kLanguage       = "language",
        kRegion         = "region",
        kHistory        = "history",
        kMenu           = "menu";



// every label name has a colour
const std::map<QString, QString> kColours = {
        std::make_pair(kHomeLink,       "#ffaaff"),
        std::make_pair(kShoppingBasket, "#ffaaaa"),
        std::make_pair(kSignIn,         "#aaffaa"),
        std::make_pair(kNavTabs,        "#ffa9d3"),
        std::make_pair(kAdvert,         "#ffaa66"),
        std::make_pair(kSearchButton,   "#aaffff"),
        std::make_pair(kSearchResult,   "#99ddff"),
        std::make_pair(kSearchText,     "#aaaaff"),
        std::make_pair(kSearchForward,  "#5caeff"),
        std::make_pair(kSearchBackward, "#5caeff"),
        std::make_pair(kSearchOptions,  "#9dceff"),
        std::make_pair(kWishlist,       "#cdf5f6"),
        std::make_pair(kRegion,         "#aeb6bf"),
        std::make_pair(kLanguage,       "#a9cce3"),
        std::make_pair(kHistory,        "#fad7a0"),
        std::make_pair(kMenu,           "#f75882"),
        std::make_pair(kResultText,     "#05b8cc")
    };

class ResponsiveLabel : public QLabel {
public:
    ResponsiveLabel(QString name) ;
    ResponsiveLabel(QString name, QString colour) ;
};


#endif // RESPONSIVELABEL_H
