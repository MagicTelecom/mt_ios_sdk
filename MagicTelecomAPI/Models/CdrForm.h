//
//  CdrForm.h
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#ifndef APIMATIC_CDRFORM
#define APIMATIC_CDRFORM

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "Cdrs.h"


//protocol defined for deserialization of JSON
@protocol CdrForm
@end

@interface CdrForm : JSONModel

/**
* TODO: Write general description for this field
*/
@property Cdrs* cdrs;


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