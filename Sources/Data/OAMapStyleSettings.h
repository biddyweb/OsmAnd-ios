//
//  OAMapStyleSettings.h
//  OsmAnd
//
//  Created by Alexey Kulish on 14/02/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>

#include <OsmAndCore.h>
#include <OsmAndCore/Map/UnresolvedMapStyle.h>

typedef NS_ENUM(NSInteger, OAMapStyleValueDataType)
{
    OABoolean,
    OAInteger,
    OAFloat,
    OAString,
    OAColor,
};

@interface OAMapStyleParameterValue : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *title;

@end

@interface OAMapStyleParameter : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *mapStyleName;
@property (nonatomic) NSString *mapPresetName;
@property (nonatomic) NSString *category;
@property (nonatomic) OAMapStyleValueDataType dataType;
@property (nonatomic) NSString *value;
@property (nonatomic) NSString *defaultValue;
@property (nonatomic) NSArray *possibleValues;

- (NSString *)getValueTitle;

@end

@interface OAMapStyleSettings : NSObject

-(instancetype)initWithStyleName:(NSString *)mapStyleName mapPresetName:(NSString *)mapPresetName;


-(NSArray *) getAllParameters;
-(OAMapStyleParameter *) getParameter:(NSString *)name;

-(NSArray *) getAllCategories;
-(NSString *) getCategoryTitle:(NSString *)categoryName;
-(NSArray *) getParameters:(NSString *)category;

-(void) saveParameters;
-(void) save:(OAMapStyleParameter *)parameter;

@end
