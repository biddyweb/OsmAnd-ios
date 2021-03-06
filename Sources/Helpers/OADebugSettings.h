//
//  OADebugSettings.h
//  OsmAnd
//
//  Created by Alexey Pelykh on 7/31/14.
//  Copyright (c) 2014 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OADebugSettings : NSObject

@property (nonatomic) BOOL useRawSpeedAndAltitudeOnHUD;
@property (nonatomic) BOOL setAllResourcesAsOutdated;
@property (nonatomic) int textureFilteringQuality;

@end
