//
//  AccountsController.h
//  MagicTelecomAPI
//
//  This file was automatically generated by APIMATIC v2.0 on 06/23/2016
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "CallerLocationForm.h"
#import "AccountForm.h"
#import "CdrForm.h"
#import "TelephoneNumberForm.h"
#import "CartCheckoutForm.h"
#import "ItemForm.h"
#import "TrunkForm.h"
#import "TokenForm.h"

@interface AccountsController : BaseController

/**
* Completion block definition for asynchronous call to Caller Locations */
typedef void (^CompletedPostCallerLocations)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create a new caller location
* @param    accountNumber    Required parameter: Number of the account
* @param    callerLocationForm    Required parameter: Caller Location Data
*/
- (void) createCallerLocationsAsyncWithAccountNumber:(NSString*) accountNumber
                callerLocationForm:(CallerLocationForm*) callerLocationForm
                completionBlock:(CompletedPostCallerLocations) onCompleted;

/**
* Completion block definition for asynchronous call to Caller Location By Id */
typedef void (^CompletedGetCallerLocationById)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get a caller location by Id
* @param    accountNumber    Required parameter: Account Number
* @param    callerLocationId    Required parameter: a caller location id
*/
- (void) getCallerLocationByIdAsyncWithAccountNumber:(NSString*) accountNumber
                callerLocationId:(int) callerLocationId
                completionBlock:(CompletedGetCallerLocationById) onCompleted;

/**
* Completion block definition for asynchronous call to Caller Locations */
typedef void (^CompletedDeleteCallerLocations)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete all caller locations
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteCallerLocationsAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteCallerLocations) onCompleted;

/**
* Completion block definition for asynchronous call to Caller Location By Id */
typedef void (^CompletedPutCallerLocationById)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Update a caller location
* @param    accountNumber    Required parameter: Account Number
* @param    callerLocationId    Required parameter: Caller Location Id
* @param    callerLocationForm    Required parameter: Caller Location Params
*/
- (void) updateCallerLocationByIdAsyncWithAccountNumber:(NSString*) accountNumber
                callerLocationId:(int) callerLocationId
                callerLocationForm:(CallerLocationForm*) callerLocationForm
                completionBlock:(CompletedPutCallerLocationById) onCompleted;

/**
* Completion block definition for asynchronous call to Caller Location By Id */
typedef void (^CompletedDeleteCallerLocationById)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete a caller location by id
* @param    accountNumber    Required parameter: Account Number
* @param    callerLocationId    Required parameter: Caller Location Id
*/
- (void) deleteCallerLocationByIdAsyncWithAccountNumber:(NSString*) accountNumber
                callerLocationId:(int) callerLocationId
                completionBlock:(CompletedDeleteCallerLocationById) onCompleted;

/**
* Completion block definition for asynchronous call to Caller Locations */
typedef void (^CompletedGetCallerLocations)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of caller locations for the specific account.
* @param    accountNumber    Required parameter: Number of the account
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result
* @param    limit    Optional parameter: Maximum number of results to return in the response.
*/
- (void) getCallerLocationsAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                completionBlock:(CompletedGetCallerLocations) onCompleted;

/**
* Completion block definition for asynchronous call to Accounts */
typedef void (^CompletedGetAccounts)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow the admin to get the list of all accounts.
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
* @param    filter    Optional parameter: Allowed fields: number, email, contact_number, firstname, lastname. Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. Example: www.example.com\\\/users?filter='name::todd|city::denver|title::grand poobah
*/
- (void) getAccountsAsyncWithPage:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                completionBlock:(CompletedGetAccounts) onCompleted;

/**
* Completion block definition for asynchronous call to Account */
typedef void (^CompletedPostAccount)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create a new account.
* @param    accountForm    Required parameter: TODO: type description here
*/
- (void) createAccountAsyncWithAccountForm:(AccountForm*) accountForm
                completionBlock:(CompletedPostAccount) onCompleted;

/**
* Completion block definition for asynchronous call to Account */
typedef void (^CompletedDeleteAccount)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete an account
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteAccountAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteAccount) onCompleted;

/**
* Completion block definition for asynchronous call to Account */
typedef void (^CompletedGetAccount)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get a specific account.
* @param    accountNumber    Required parameter: Account Number
*/
- (void) getAccountAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedGetAccount) onCompleted;

/**
* Completion block definition for asynchronous call to Account */
typedef void (^CompletedPutAccount)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
*  Update an account by a given account_number
* @param    accountNumber    Required parameter: Account Number
* @param    accountForm    Required parameter: Form parameters
*/
- (void) updateAccountAsyncWithAccountNumber:(NSString*) accountNumber
                accountForm:(AccountForm*) accountForm
                completionBlock:(CompletedPutAccount) onCompleted;

/**
* Completion block definition for asynchronous call to Cdrs */
typedef void (^CompletedDeleteCdrs)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes all cdrs requests from customer's account.
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteCdrsAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteCdrs) onCompleted;

/**
* Completion block definition for asynchronous call to Cdrs */
typedef void (^CompletedGetCdrs)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of cdr request for the specific account.
* @param    accountNumber    Required parameter: Account Number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
* @param    filter    Optional parameter: Allowed fields: service_type, from, to and created. Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. Example: www.example.com\\\/users?filter='name::todd|city::denver|title::grand poobah
*/
- (void) getCdrsAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                completionBlock:(CompletedGetCdrs) onCompleted;

/**
* Completion block definition for asynchronous call to Cdrs */
typedef void (^CompletedPostCdrs)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Creates a cdr request
* @param    accountNumber    Required parameter: Account Number
* @param    cdrsForm    Required parameter: cdrs params
*/
- (void) createCdrsAsyncWithAccountNumber:(NSString*) accountNumber
                cdrsForm:(CdrForm*) cdrsForm
                completionBlock:(CompletedPostCdrs) onCompleted;

/**
* Completion block definition for asynchronous call to Cdr By Id */
typedef void (^CompletedGetCdrById)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to download the cdrs in a file
* @param    accountNumber    Required parameter: Account Number
* @param    cdrId    Required parameter: Cdr Id
*/
- (void) getCdrByIdAsyncWithAccountNumber:(NSString*) accountNumber
                cdrId:(NSString*) cdrId
                completionBlock:(CompletedGetCdrById) onCompleted;

/**
* Completion block definition for asynchronous call to Cdr By Id */
typedef void (^CompletedDeleteCdrById)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes a cdr file from customer's account.
* @param    accountNumber    Required parameter: Account Number
* @param    cdrId    Required parameter: Cdr Id
*/
- (void) deleteCdrByIdAsyncWithAccountNumber:(NSString*) accountNumber
                cdrId:(NSString*) cdrId
                completionBlock:(CompletedDeleteCdrById) onCompleted;

/**
* Completion block definition for asynchronous call to Dids */
typedef void (^CompletedDeleteDids)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes all phone_number from customer's account. These numbers must be unassigned and returned to Magic stock.
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteDidsAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteDids) onCompleted;

/**
* Completion block definition for asynchronous call to Telephone Number */
typedef void (^CompletedDeleteTelephoneNumber)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes a phone_number from customer's account. This number must be unassigned and returned to Magic stock.
* @param    accountNumber    Required parameter: Account Number
* @param    telephoneNumber    Required parameter: Telephone Number
*/
- (void) deleteTelephoneNumberAsyncWithAccountNumber:(NSString*) accountNumber
                telephoneNumber:(NSString*) telephoneNumber
                completionBlock:(CompletedDeleteTelephoneNumber) onCompleted;

/**
* Completion block definition for asynchronous call to Telephone Number */
typedef void (^CompletedGetTelephoneNumber)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the a specific phone number.
* @param    accountNumber    Required parameter: Account Number
* @param    telephoneNumber    Required parameter: Telephone Number
*/
- (void) getTelephoneNumberAsyncWithAccountNumber:(NSString*) accountNumber
                telephoneNumber:(NSString*) telephoneNumber
                completionBlock:(CompletedGetTelephoneNumber) onCompleted;

/**
* Completion block definition for asynchronous call to Telephone Number */
typedef void (^CompletedPatchTelephoneNumber)(BOOL success, HttpContext* context, NSError* error);

/**
* Allow client to perform operations on a specific did
* @param    accountNumber    Required parameter: Account Number
* @param    telephoneNumber    Required parameter: Telephone Number
* @param    telephoneNumberForm    Required parameter: Phone params
*/
- (void) updateTelephoneNumberAsyncWithAccountNumber:(NSString*) accountNumber
                telephoneNumber:(NSString*) telephoneNumber
                telephoneNumberForm:(TelephoneNumberForm*) telephoneNumberForm
                completionBlock:(CompletedPatchTelephoneNumber) onCompleted;

/**
* Completion block definition for asynchronous call to Dids */
typedef void (^CompletedGetDids)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of numbers for the specific account
* @param    accountNumber    Required parameter: Account Number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
* @param    filter    Optional parameter: Allowed fields: trunk_id, phone_number, country_iso2, region_handle, location_handle, sip_end_point_uri.\n * Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. \n * The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. \n * Example: www.example.com\\\/users?filter='name::todd|city::denver|title::grand poobah
*/
- (void) getDidsAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                completionBlock:(CompletedGetDids) onCompleted;

/**
* Completion block definition for asynchronous call to Trunks */
typedef void (^CompletedDeleteTrunks)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes all trunks from customer's account. Numbers on that trunk must be unassigned and returned to Magic stock
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteTrunksAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteTrunks) onCompleted;

/**
* Completion block definition for asynchronous call to Trunks */
typedef void (^CompletedGetTrunks)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of trunks for the specific account
* @param    accountNumber    Required parameter: Account Number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response
* @param    filter    Optional parameter: Allowed fields: trunk_handle. Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. Example: www.example.com\\\/users?filter='name::todd|city::denver|title::grand poobah
*/
- (void) getTrunksAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                completionBlock:(CompletedGetTrunks) onCompleted;

/**
* Completion block definition for asynchronous call to Trunk By Id */
typedef void (^CompletedDeleteTrunkById)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Deletes a trunk from customer's account. Numbers on that trunk must be unassigned and returned to Magic stock.
* @param    accountNumber    Required parameter: Accoubt Number
* @param    trunkId    Required parameter: Trunk id
*/
- (void) deleteTrunkByIdAsyncWithAccountNumber:(NSString*) accountNumber
                trunkId:(NSString*) trunkId
                completionBlock:(CompletedDeleteTrunkById) onCompleted;

/**
* Completion block definition for asynchronous call to Trunk By Id */
typedef void (^CompletedGetTrunkById)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the a specific trunk
* @param    accountNumber    Required parameter: Account Number
* @param    trunkId    Required parameter: Trunk id
*/
- (void) getTrunkByIdAsyncWithAccountNumber:(NSString*) accountNumber
                trunkId:(NSString*) trunkId
                completionBlock:(CompletedGetTrunkById) onCompleted;

/**
* Completion block definition for asynchronous call to Carts */
typedef void (^CompletedDeleteCarts)(BOOL success, HttpContext* context, NSError* error);

/**
* Delete all carts from an account
* @param    accountNumber    Required parameter: Account Number
*/
- (void) deleteCartsAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedDeleteCarts) onCompleted;

/**
* Completion block definition for asynchronous call to Carts */
typedef void (^CompletedGetCarts)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of carts.
* @param    accountNumber    Required parameter: Account number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
* @param    filter    Optional parameter: Allowed fields: cart_status_handle, created. Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. Example: www.example.com\\/users?filter='name::todd|city::denver|title::grand poobah'
* @param    sort    Optional parameter: Allowed fields: created. Use sort query-string parameter that contains a delimited set of property names. For each property name, sort in ascending order, and for each property prefixed with a dash ('-') sort in descending order. Separate each property name with a vertical bar ('|'), which is consistent with the separation of the name\\/value pairs in filtering, above. For example, if we want to retrieve users in order of their last name (ascending), first name (ascending) and hire date (descending), the request might look like this www.example.com\\/users?sort='last_name|first_name|-hire_date'
*/
- (void) getCartsAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                sort:(NSString*) sort
                completionBlock:(CompletedGetCarts) onCompleted;

/**
* Completion block definition for asynchronous call to Carts */
typedef void (^CompletedPostCarts)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create an cart
* @param    accountNumber    Required parameter: Account number
*/
- (void) createCartsAsyncWithAccountNumber:(NSString*) accountNumber
                completionBlock:(CompletedPostCarts) onCompleted;

/**
* Completion block definition for asynchronous call to Cart */
typedef void (^CompletedDeleteCart)(BOOL success, HttpContext* context, NSError* error);

/**
* Delete a cart
* @param    accountNumber    Required parameter: Account number
* @param    cartId    Required parameter: Cart Id
*/
- (void) deleteCartAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(NSString*) cartId
                completionBlock:(CompletedDeleteCart) onCompleted;

/**
* Completion block definition for asynchronous call to Cart */
typedef void (^CompletedGetCart)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get a specific cart.
* @param    accountNumber    Required parameter: Account number
* @param    cartId    Required parameter: Cart id
*/
- (void) getCartAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(NSString*) cartId
                completionBlock:(CompletedGetCart) onCompleted;

/**
* Completion block definition for asynchronous call to Cart Checkout */
typedef void (^CompletedPostCartCheckout)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Checkout a cart and create an order
* @param    accountNumber    Required parameter: Account Number
* @param    cartId    Required parameter: Cart Id
* @param    cartCheckoutForm    Required parameter: TODO: type description here
*/
- (void) createCartCheckoutAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(NSString*) cartId
                cartCheckoutForm:(CartCheckoutForm*) cartCheckoutForm
                completionBlock:(CompletedPostCartCheckout) onCompleted;

/**
* Completion block definition for asynchronous call to Items */
typedef void (^CompletedDeleteItems)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete all carts items
* @param    accountNumber    Required parameter: Account Number
* @param    cartId    Required parameter: Cart Id
*/
- (void) deleteItemsAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(int) cartId
                completionBlock:(CompletedDeleteItems) onCompleted;

/**
* Completion block definition for asynchronous call to Items */
typedef void (^CompletedGetItems)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of cart items.
* @param    accountNumber    Required parameter: Account Number
* @param    cartId    Required parameter: Cart Id
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
*/
- (void) getItemsAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(int) cartId
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                completionBlock:(CompletedGetItems) onCompleted;

/**
* Completion block definition for asynchronous call to Items */
typedef void (^CompletedPostItems)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* TODO: type endpoint description here
* @param    accountNumber    Required parameter: Account Number
* @param    cartId    Required parameter: Cart Id
* @param    itemForm    Required parameter: TODO: type description here
*/
- (void) createItemsAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(int) cartId
                itemForm:(ItemForm*) itemForm
                completionBlock:(CompletedPostItems) onCompleted;

/**
* Completion block definition for asynchronous call to Item */
typedef void (^CompletedDeleteItem)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete a cart item
* @param    accountNumber    Required parameter: Account Number
* @param    cartId    Required parameter: Cart Id
* @param    itemId    Required parameter: Item Id
*/
- (void) deleteItemAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(int) cartId
                itemId:(int) itemId
                completionBlock:(CompletedDeleteItem) onCompleted;

/**
* Completion block definition for asynchronous call to Item */
typedef void (^CompletedGetItem)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get a specific cart item.
* @param    accountNumber    Required parameter: TODO: type description here
* @param    cartId    Required parameter: TODO: type description here
* @param    itemId    Required parameter: TODO: type description here
*/
- (void) getItemAsyncWithAccountNumber:(NSString*) accountNumber
                cartId:(int) cartId
                itemId:(int) itemId
                completionBlock:(CompletedGetItem) onCompleted;

/**
* Completion block definition for asynchronous call to Orders */
typedef void (^CompletedGetOrders)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of orders.
* @param    accountNumber    Required parameter: Account Number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
* @param    filter    Optional parameter: Allowed fields: from, to, created. Use the following delimiters to build your filters params. The vertical bar ('|') to separate individual filter phrases and a double colon ('::') to separate the names and values. The delimiter of the double colon (':') separates the property name from the comparison value, enabling the comparison value to contain spaces. Example: www.example.com\\\/users?filter='name::todd|city::denver|title::grand poobah
*/
- (void) getOrdersAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                filter:(NSString*) filter
                completionBlock:(CompletedGetOrders) onCompleted;

/**
* Completion block definition for asynchronous call to Order */
typedef void (^CompletedGetOrder)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get a specific order.
* @param    accountNumber    Required parameter: Account Number
* @param    orderId    Required parameter: Order Id
*/
- (void) getOrderAsyncWithAccountNumber:(NSString*) accountNumber
                orderId:(int) orderId
                completionBlock:(CompletedGetOrder) onCompleted;

/**
* Completion block definition for asynchronous call to Trunk */
typedef void (^CompletedPatchTrunk)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Update a trunk
* @param    accountNumber    Required parameter: TODO: type description here
* @param    trunkId    Required parameter: TODO: type description here
* @param    trunkForm    Required parameter: TODO: type description here
*/
- (void) updateTrunkAsyncWithAccountNumber:(NSString*) accountNumber
                trunkId:(int) trunkId
                trunkForm:(TrunkForm*) trunkForm
                completionBlock:(CompletedPatchTrunk) onCompleted;

/**
* Completion block definition for asynchronous call to Access Tokens */
typedef void (^CompletedGetAccessTokens)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get the list of tokens for the specific account.
* @param    accountNumber    Required parameter: Account Number
* @param    page    Optional parameter: Zero based offset index for the results. e.g. 0 would start at the first result and 10 would start at the eleventh result.
* @param    limit    Optional parameter: Maximum number of results to return in the response.
*/
- (void) getAccessTokensAsyncWithAccountNumber:(NSString*) accountNumber
                page:(NSNumber*) page
                limit:(NSNumber*) limit
                completionBlock:(CompletedGetAccessTokens) onCompleted;

/**
* Completion block definition for asynchronous call to Access Token */
typedef void (^CompletedDeleteAccessToken)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Delete an access token
* @param    accountNumber    Required parameter: Account Number
* @param    token    Required parameter: Token
*/
- (void) deleteAccessTokenAsyncWithAccountNumber:(NSString*) accountNumber
                token:(NSString*) token
                completionBlock:(CompletedDeleteAccessToken) onCompleted;

/**
* Completion block definition for asynchronous call to Access Token */
typedef void (^CompletedGetAccessToken)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Allow clients to get a specific token.
* @param    accountNumber    Required parameter: Account Number
* @param    token    Required parameter: Token
*/
- (void) getAccessTokenAsyncWithAccountNumber:(NSString*) accountNumber
                token:(NSString*) token
                completionBlock:(CompletedGetAccessToken) onCompleted;

/**
* Completion block definition for asynchronous call to Access Token */
typedef void (^CompletedPatchAccessToken)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Update an account by a given account_number
* @param    accountNumber    Required parameter: Account Number
* @param    token    Required parameter: Token
* @param    tokenForm    Required parameter: TODO: type description here
*/
- (void) updateAccessTokenAsyncWithAccountNumber:(NSString*) accountNumber
                token:(NSString*) token
                tokenForm:(TokenForm*) tokenForm
                completionBlock:(CompletedPatchAccessToken) onCompleted;

/**
* Completion block definition for asynchronous call to Access Tokens */
typedef void (^CompletedPostAccessTokens)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create a new Access Token.
* @param    accountNumber    Required parameter: Account Number
* @param    accessTokenForm    Required parameter: TODO: type description here
*/
- (void) createAccessTokensAsyncWithAccountNumber:(NSString*) accountNumber
                accessTokenForm:(TokenForm*) accessTokenForm
                completionBlock:(CompletedPostAccessTokens) onCompleted;

@end