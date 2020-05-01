// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   People API (people/v1)
// Description:
//   Provides access to information about profiles and contacts.
// Documentation:
//   https://developers.google.com/people/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, download, and permanently delete your
 *  contacts
 *
 *  Value "https://www.googleapis.com/auth/contacts"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceContacts;
/**
 *  Authorization scope: See and download your contacts
 *
 *  Value "https://www.googleapis.com/auth/contacts.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceContactsReadonly;
/**
 *  Authorization scope: See and download your organization's GSuite directory
 *
 *  Value "https://www.googleapis.com/auth/directory.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceDirectoryReadonly;
/**
 *  Authorization scope: View your street addresses
 *
 *  Value "https://www.googleapis.com/auth/user.addresses.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserAddressesRead;
/**
 *  Authorization scope: View your complete date of birth
 *
 *  Value "https://www.googleapis.com/auth/user.birthday.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserBirthdayRead;
/**
 *  Authorization scope: View your email addresses
 *
 *  Value "https://www.googleapis.com/auth/user.emails.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserEmailsRead;
/**
 *  Authorization scope: See your gender
 *
 *  Value "https://www.googleapis.com/auth/user.gender.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserGenderRead;
/**
 *  Authorization scope: View your email address
 *
 *  Value "https://www.googleapis.com/auth/userinfo.email"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserinfoEmail;
/**
 *  Authorization scope: See your personal info, including any personal info
 *  you've made publicly available
 *
 *  Value "https://www.googleapis.com/auth/userinfo.profile"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserinfoProfile;
/**
 *  Authorization scope: See your education, work history and org info
 *
 *  Value "https://www.googleapis.com/auth/user.organization.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserOrganizationRead;
/**
 *  Authorization scope: View your phone numbers
 *
 *  Value "https://www.googleapis.com/auth/user.phonenumbers.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleServiceUserPhonenumbersRead;

// ----------------------------------------------------------------------------
//   GTLRPeopleServiceService
//

/**
 *  Service for executing People API queries.
 *
 *  Provides access to information about profiles and contacts.
 */
@interface GTLRPeopleServiceService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRPeopleServiceQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
