//
//  OADestinationCell.h
//  OsmAnd
//
//  Created by Alexey Kulish on 01/03/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class OADestination;

@protocol OADestinatioCellProtocol <NSObject>
@optional

- (void)btnCloseClicked:(id)sender destination:(OADestination *)destination;

@end

@interface OADestinationCell : NSObject

@property (nonatomic) UIView *directionsView;
@property (nonatomic) UIButton *btnClose;
@property (nonatomic) UIView *colorView;
@property (nonatomic) UIImageView *compassImage;
@property (nonatomic) UILabel *distanceLabel;
@property (nonatomic) UILabel *descLabel;

@property (nonatomic) UIView *contentView;
@property (nonatomic) NSArray *destinations;
@property (weak, nonatomic) id<OADestinatioCellProtocol> delegate;
@property (nonatomic, assign) BOOL drawSplitLine;

@property (nonatomic, assign) CLLocationCoordinate2D currentLocation;
@property (nonatomic, assign) CLLocationDirection currentDirection;

- (instancetype)initWithDestination:(OADestination *)destination;

- (void)updateLayout:(CGRect)frame;
- (void)reloadData;
- (void)updateDirections:(CLLocationCoordinate2D)myLocation direction:(CLLocationDirection)direction;

- (void)updateDirection:(OADestination *)destination imageView:(UIImageView *)imageView;

- (OADestination *)destinationByPoint:(CGPoint)point;

@end
