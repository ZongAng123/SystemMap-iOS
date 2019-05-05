//
//  LocationConverter.h
//  SystemMap-iOS
//
//  Created by 纵昂 on 2019/5/5.
//  Copyright © 2019 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
NS_ASSUME_NONNULL_BEGIN

@interface LocationConverter : NSObject

//判断是否在中国
+(BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;

//将WGS-84转为GCJ-02(火星坐标):
+(CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;

//将GCJ-02(火星坐标)转为百度坐标:
+(CLLocationCoordinate2D)transformFromGCJToBaidu:(CLLocationCoordinate2D)p;

//将百度坐标转为GCJ-02(火星坐标):
+(CLLocationCoordinate2D)transformFromBaiduToGCJ:(CLLocationCoordinate2D)p;

//将GCJ-02(火星坐标)转为WGS-84:
+(CLLocationCoordinate2D)transformFromGCJToWGS:(CLLocationCoordinate2D)p;

@end

NS_ASSUME_NONNULL_END
