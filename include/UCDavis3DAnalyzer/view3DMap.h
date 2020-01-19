/*
 * @name UC Davis 3D Analyzer
 * @author Brad Lee & SiYi Meng
 * @version 1.00
 * @license GNU LGPL v3
 * @brief 3D model analysis of UC Davis utility usage
 *
 * QT and OCC integration:
 * Copyright (c) 2018 Shing Liu (eryar@163.com)
 * License: MIT
 * Source: https://github.com/eryar/occQt
 *
 * Data from OSIsoft and UC Davis
 *
 * Icons and images owned by their respective owners
 */

#ifndef VIEW_3D_MAP_H
#define VIEW_3D_MAP_H

#include "UCDavis3DAnalyzer/amalgamated.h"

/*
 * UCD3DA = UC Davis 3D Analyzer
 */
namespace UCD3DA {

class coord {
public:
  coord(float lat, float lon) : latitude(lat), longitude(lon) {}
  float latitude;
  float longitude;
};

void generateBuildings(Ui::OccView *myOccView);

} // namespace UCD3DA

#endif // end VIEW_3D_MAP_H
