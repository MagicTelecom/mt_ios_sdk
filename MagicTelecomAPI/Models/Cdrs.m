//
//  Cdrs.m
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#import "Cdrs.h"

@implementation Cdrs

/**
* TODO: Write general description for this method
*/
@synthesize endDate;

/**
* TODO: Write general description for this method
*/
@synthesize serviceType;

/**
* TODO: Write general description for this method
*/
@synthesize startDate;

/**
* TODO: Write general description for this method
*/
@synthesize userId;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"end_date": @"endDate",
        @"service_type": @"serviceType",
        @"start_date": @"startDate",
        @"user_id": @"userId"  
    }];

    return map;
}

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper
{ 
  return [[JSONKeyMapper alloc] initWithDictionary: [self keyMap]];
}

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName
{
    return YES;
}

@end