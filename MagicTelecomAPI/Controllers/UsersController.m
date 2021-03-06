//
//  UsersController.m
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#import "UsersController.h"

@implementation UsersController

/**
* Allow clients to test authentication.
* @return	Returns the void response from the API call */
- (void) getAuthenticationsWithCompletionBlock:(CompletedGetAuthentications) onCompleted
{
    //the base uri for api requests
    NSString* baseUri = [NSString stringWithString: (NSString*) [Configuration BaseUri]];

    //prepare query string for API call
    NSMutableString* queryBuilder = [NSMutableString stringWithString: baseUri]; 
    [queryBuilder appendString: @"/authentications"];

    //validate and preprocess url
    NSString* queryUrl = [APIHelper cleanUrl: queryBuilder];

    //preparing request headers
    NSMutableDictionary* headers = [[NSMutableDictionary alloc] initWithDictionary: @{
        @"user-agent": @"APIMATIC 2.0",
        @"accept": @"application/json",
        @"X-Auth-Token": [Configuration XAuthToken]
    }];

    //Remove null values from header collection in order to omit from request
    [APIHelper removeNullValues: headers];


    //prepare the request and fetch response  
    HttpRequest* request = [[self clientInstance] get: ^(HttpRequest* request) 
    { 
        [request setQueryUrl: queryUrl]; //set request url        
        [request setHeaders: headers]; //set request headers

    }];

    //use the instance of the http client to make the actual call
    [[self clientInstance]
     executeAsString: request
     success: ^(id context, HttpResponse *response) {
         //Error handling using HTTP status codes
         NSError* statusError = nil;

         //Error handling using HTTP status codes 
         if (response.statusCode == 401)
             statusError = [[APIError alloc] initWithReason: @"You are not authenticated"
                                                    andCode: response.statusCode
                                                    andData: response.rawBody];

         else if (response.statusCode == 403)
             statusError = [[APIError alloc] initWithReason: @"This action needs a valid WSSE header"
                                                    andCode: response.statusCode
                                                    andData: response.rawBody];

         else if (response.statusCode == 400)
             statusError = [[APIError alloc] initWithReason: @"Http bad request"
                                                    andCode: response.statusCode
                                                    andData: response.rawBody];

         else if((response.statusCode < 200) || (response.statusCode > 206)) //[200,206] = HTTP OK
             statusError = [[APIError alloc] initWithReason: @"HTTP Response Not OK"
                                                    andCode: response.statusCode
                                                    andData: response.rawBody];

         if(statusError != nil)
         {
             //announce completion with failure due to HTTP status code checking
             onCompleted(NO, context, nil, statusError);
         }
         else
         {
             //return response to API caller
             NSString* strResult = [(HttpStringResponse*)response body];
             id result = [NSJSONSerialization
                        JSONObjectWithData: [strResult dataUsingEncoding: NSUTF8StringEncoding]
                                   options: NSJSONReadingAllowFragments
                                     error: nil];

 
             //announce completion with success
             onCompleted(YES, context, result, nil);
         }
     } failure:^(id context, NSError *error) {
 
         //announce completion with failure
         onCompleted(NO, context, nil, error);
     }];
}


@end