//
//  DidItem.m
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#import "DidItem.h"

@implementation DidItem

/**
* TODO: Write general description for this method
*/
@synthesize callerLocation;

/**
* TODO: Write general description for this method
*/
@synthesize didTypeHandle;

/**
* TODO: Write general description for this method
*/
@synthesize phoneNumber;

/**
* TODO: Write general description for this method
*/
@synthesize trunkId;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"_caller_location": @"callerLocation",
        @"did_type_handle": @"didTypeHandle",
        @"phone_number": @"phoneNumber",
        @"trunk_id": @"trunkId"  
    }];
    [map addEntriesFromDictionary: [super keyMap]];   

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