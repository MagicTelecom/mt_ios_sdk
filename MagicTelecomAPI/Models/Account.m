//
//  Account.m
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#import "Account.h"

@implementation Account

/**
* TODO: Write general description for this method
*/
@synthesize contactNumber;

/**
* TODO: Write general description for this method
*/
@synthesize email;

/**
* TODO: Write general description for this method
*/
@synthesize firstname;

/**
* TODO: Write general description for this method
*/
@synthesize lastname;

/**
* TODO: Write general description for this method
*/
@synthesize number;

/**
* TODO: Write general description for this method
*/
@synthesize roles;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"contact_number": @"contactNumber",
        @"email": @"email",
        @"firstname": @"firstname",
        @"lastname": @"lastname",
        @"number": @"number",
        @"roles": @"roles"  
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