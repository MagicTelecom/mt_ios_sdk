//
//  Data.h
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#ifndef APIMATIC_DATA
#define APIMATIC_DATA

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "CallerLocation.h"


//protocol defined for deserialization of JSON
@protocol Data
@end

@interface Data : JSONModel

/**
* TODO: Write general description for this field
*/
@property int limit;

/**
* TODO: Write general description for this field
*/
@property int page;

/**
* TODO: Write general description for this field
*/
@property NSArray<CallerLocation>* results;

/**
* TODO: Write general description for this field
*/
@property int total;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap;

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper;

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName;

@end
#endif