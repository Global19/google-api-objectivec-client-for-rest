// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   People API (people/v1)
// Description:
//   Provides access to information about profiles and contacts.
// Documentation:
//   https://developers.google.com/people/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPeopleService_CreateContactGroupRequest;
@class GTLRPeopleService_ModifyContactGroupMembersRequest;
@class GTLRPeopleService_Person;
@class GTLRPeopleService_UpdateContactGroupRequest;
@class GTLRPeopleService_UpdateContactPhotoRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// sortOrder

/** Value: "FIRST_NAME_ASCENDING" */
GTLR_EXTERN NSString * const kGTLRPeopleServiceSortOrderFirstNameAscending;
/** Value: "LAST_MODIFIED_ASCENDING" */
GTLR_EXTERN NSString * const kGTLRPeopleServiceSortOrderLastModifiedAscending;
/** Value: "LAST_MODIFIED_DESCENDING" */
GTLR_EXTERN NSString * const kGTLRPeopleServiceSortOrderLastModifiedDescending;
/** Value: "LAST_NAME_ASCENDING" */
GTLR_EXTERN NSString * const kGTLRPeopleServiceSortOrderLastNameAscending;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other People Service query classes.
 */
@interface GTLRPeopleServiceQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Get a list of contact groups owned by the authenticated user by specifying
 *  a list of contact group resource names.
 *
 *  Method: people.contactGroups.batchGet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 */
@interface GTLRPeopleServiceQuery_ContactGroupsBatchGet : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsBatchGet]

/**
 *  Optional. Specifies the maximum number of members to return for each group.
 *  Defaults
 *  to 0 if not set, which will return zero members.
 */
@property(nonatomic, assign) NSInteger maxMembers;

/** Required. The resource names of the contact groups to get. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resourceNames;

/**
 *  Fetches a @c GTLRPeopleService_BatchGetContactGroupsResponse.
 *
 *  Get a list of contact groups owned by the authenticated user by specifying
 *  a list of contact group resource names.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsBatchGet
 */
+ (instancetype)query;

@end

/**
 *  Create a new contact group owned by the authenticated user.
 *
 *  Method: people.contactGroups.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_ContactGroupsCreate : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsCreateWithObject:]

/**
 *  Fetches a @c GTLRPeopleService_ContactGroup.
 *
 *  Create a new contact group owned by the authenticated user.
 *
 *  @param object The @c GTLRPeopleService_CreateContactGroupRequest to include
 *    in the query.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsCreate
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_CreateContactGroupRequest *)object;

@end

/**
 *  Delete an existing contact group owned by the authenticated user by
 *  specifying a contact group resource name.
 *
 *  Method: people.contactGroups.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_ContactGroupsDelete : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsDeleteWithresourceName:]

/**
 *  Optional. Set to true to also delete the contacts in the specified group.
 */
@property(nonatomic, assign) BOOL deleteContacts;

/** Required. The resource name of the contact group to delete. */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_Empty.
 *
 *  Delete an existing contact group owned by the authenticated user by
 *  specifying a contact group resource name.
 *
 *  @param resourceName Required. The resource name of the contact group to
 *    delete.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsDelete
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  Get a specific contact group owned by the authenticated user by specifying
 *  a contact group resource name.
 *
 *  Method: people.contactGroups.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 */
@interface GTLRPeopleServiceQuery_ContactGroupsGet : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsGetWithresourceName:]

/**
 *  Optional. Specifies the maximum number of members to return. Defaults to 0
 *  if not
 *  set, which will return zero members.
 */
@property(nonatomic, assign) NSInteger maxMembers;

/** Required. The resource name of the contact group to get. */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_ContactGroup.
 *
 *  Get a specific contact group owned by the authenticated user by specifying
 *  a contact group resource name.
 *
 *  @param resourceName Required. The resource name of the contact group to get.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsGet
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  List all contact groups owned by the authenticated user. Members of the
 *  contact groups are not populated.
 *
 *  Method: people.contactGroups.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 */
@interface GTLRPeopleServiceQuery_ContactGroupsList : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsList]

/**
 *  Optional. The maximum number of resources to return. Valid values are
 *  between 1 and
 *  1000, inclusive. Defaults to 30 if not set or set to 0.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. The next_page_token value returned from a previous call to
 *  [ListContactGroups](/people/api/rest/v1/contactgroups/list).
 *  Requests the next page of resources.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Optional. A sync token, returned by a previous call to `contactgroups.list`.
 *  Only resources changed since the sync token was created will be returned.
 */
@property(nonatomic, copy, nullable) NSString *syncToken;

/**
 *  Fetches a @c GTLRPeopleService_ListContactGroupsResponse.
 *
 *  List all contact groups owned by the authenticated user. Members of the
 *  contact groups are not populated.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Modify the members of a contact group owned by the authenticated user.
 *  The only system contact groups that can have members added are
 *  `contactGroups/myContacts` and `contactGroups/starred`. Other system
 *  contact groups are deprecated and can only have contacts removed.
 *
 *  Method: people.contactGroups.members.modify
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_ContactGroupsMembersModify : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsMembersModifyWithObject:resourceName:]

/** Required. The resource name of the contact group to modify. */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_ModifyContactGroupMembersResponse.
 *
 *  Modify the members of a contact group owned by the authenticated user.
 *  The only system contact groups that can have members added are
 *  `contactGroups/myContacts` and `contactGroups/starred`. Other system
 *  contact groups are deprecated and can only have contacts removed.
 *
 *  @param object The @c GTLRPeopleService_ModifyContactGroupMembersRequest to
 *    include in the query.
 *  @param resourceName Required. The resource name of the contact group to
 *    modify.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsMembersModify
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_ModifyContactGroupMembersRequest *)object
                   resourceName:(NSString *)resourceName;

@end

/**
 *  Update the name of an existing contact group owned by the authenticated
 *  user.
 *
 *  Method: people.contactGroups.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_ContactGroupsUpdate : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForContactGroupsUpdateWithObject:resourceName:]

/**
 *  The resource name for the contact group, assigned by the server. An ASCII
 *  string, in the form of `contactGroups/{contact_group_id}`.
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_ContactGroup.
 *
 *  Update the name of an existing contact group owned by the authenticated
 *  user.
 *
 *  @param object The @c GTLRPeopleService_UpdateContactGroupRequest to include
 *    in the query.
 *  @param resourceName The resource name for the contact group, assigned by the
 *    server. An ASCII
 *    string, in the form of `contactGroups/{contact_group_id}`.
 *
 *  @return GTLRPeopleServiceQuery_ContactGroupsUpdate
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_UpdateContactGroupRequest *)object
                   resourceName:(NSString *)resourceName;

@end

/**
 *  Provides a list of the authenticated user's contacts merged with any
 *  connected profiles.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  Method: people.people.connections.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 */
@interface GTLRPeopleServiceQuery_PeopleConnectionsList : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleConnectionsListWithresourceName:]

/**
 *  Optional. The number of connections to include in the response. Valid values
 *  are
 *  between 1 and 2000, inclusive. Defaults to 100 if not set or set to 0.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A page token, received from a previous `ListConnections` call.
 *  Provide this to retrieve the subsequent page.
 *  When paginating, all other parameters provided to `ListConnections`
 *  must match the call that provided the page token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. A field mask to restrict which fields on each person are returned.
 *  Multiple
 *  fields can be specified by separating them with commas. Valid values are:
 *  * addresses
 *  * ageRanges
 *  * biographies
 *  * birthdays
 *  * coverPhotos
 *  * emailAddresses
 *  * events
 *  * genders
 *  * imClients
 *  * interests
 *  * locales
 *  * memberships
 *  * metadata
 *  * names
 *  * nicknames
 *  * occupations
 *  * organizations
 *  * phoneNumbers
 *  * photos
 *  * relations
 *  * residences
 *  * sipAddresses
 *  * skills
 *  * urls
 *  * userDefined
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *personFields;

/**
 *  Required. Comma-separated list of person fields to be included in the
 *  response. Each
 *  path should start with `person.`: for example, `person.names` or
 *  `person.photos`.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *requestMaskIncludeField;

/**
 *  Optional. Whether the response should include `next_sync_token`, which can
 *  be used to
 *  get all changes since the last request. For subsequent sync requests use
 *  the `sync_token` param instead. Initial sync requests that specify
 *  `request_sync_token` have an additional rate limit.
 */
@property(nonatomic, assign) BOOL requestSyncToken;

/**
 *  Required. The resource name to return connections for. Only `people/me` is
 *  valid.
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Optional. The order in which the connections should be sorted. Defaults to
 *  `LAST_MODIFIED_ASCENDING`.
 *
 *  Likely values:
 *    @arg @c kGTLRPeopleServiceSortOrderLastModifiedAscending Value
 *        "LAST_MODIFIED_ASCENDING"
 *    @arg @c kGTLRPeopleServiceSortOrderLastModifiedDescending Value
 *        "LAST_MODIFIED_DESCENDING"
 *    @arg @c kGTLRPeopleServiceSortOrderFirstNameAscending Value
 *        "FIRST_NAME_ASCENDING"
 *    @arg @c kGTLRPeopleServiceSortOrderLastNameAscending Value
 *        "LAST_NAME_ASCENDING"
 */
@property(nonatomic, copy, nullable) NSString *sortOrder;

/**
 *  Optional. A sync token, received from a previous `ListConnections` call.
 *  Provide this to retrieve only the resources changed since the last request.
 *  Sync requests that specify `sync_token` have an additional rate limit.
 *  When syncing, all other parameters provided to `ListConnections`
 *  must match the call that provided the sync token.
 */
@property(nonatomic, copy, nullable) NSString *syncToken;

/**
 *  Fetches a @c GTLRPeopleService_ListConnectionsResponse.
 *
 *  Provides a list of the authenticated user's contacts merged with any
 *  connected profiles.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  @param resourceName Required. The resource name to return connections for.
 *    Only `people/me` is valid.
 *
 *  @return GTLRPeopleServiceQuery_PeopleConnectionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  Create a new contact and return the person resource for that contact.
 *
 *  Method: people.people.createContact
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_PeopleCreateContact : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleCreateContactWithObject:]

/**
 *  Fetches a @c GTLRPeopleService_Person.
 *
 *  Create a new contact and return the person resource for that contact.
 *
 *  @param object The @c GTLRPeopleService_Person to include in the query.
 *
 *  @return GTLRPeopleServiceQuery_PeopleCreateContact
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_Person *)object;

@end

/**
 *  Delete a contact person. Any non-contact data will not be deleted.
 *
 *  Method: people.people.deleteContact
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_PeopleDeleteContact : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleDeleteContactWithresourceName:]

/** Required. The resource name of the contact to delete. */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_Empty.
 *
 *  Delete a contact person. Any non-contact data will not be deleted.
 *
 *  @param resourceName Required. The resource name of the contact to delete.
 *
 *  @return GTLRPeopleServiceQuery_PeopleDeleteContact
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  Delete a contact's photo.
 *
 *  Method: people.people.deleteContactPhoto
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_PeopleDeleteContactPhoto : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleDeleteContactPhotoWithresourceName:]

/**
 *  Optional. A field mask to restrict which fields on the person are returned.
 *  Multiple
 *  fields can be specified by separating them with commas. Defaults to empty
 *  if not set, which will skip the post mutate get. Valid values are:
 *  * addresses
 *  * ageRanges
 *  * biographies
 *  * birthdays
 *  * coverPhotos
 *  * emailAddresses
 *  * events
 *  * genders
 *  * imClients
 *  * interests
 *  * locales
 *  * memberships
 *  * metadata
 *  * names
 *  * nicknames
 *  * occupations
 *  * organizations
 *  * phoneNumbers
 *  * photos
 *  * relations
 *  * residences
 *  * sipAddresses
 *  * skills
 *  * urls
 *  * userDefined
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *personFields;

/** Required. The resource name of the contact whose photo will be deleted. */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_DeleteContactPhotoResponse.
 *
 *  Delete a contact's photo.
 *
 *  @param resourceName Required. The resource name of the contact whose photo
 *    will be deleted.
 *
 *  @return GTLRPeopleServiceQuery_PeopleDeleteContactPhoto
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  Provides information about a person by specifying a resource name. Use
 *  `people/me` to indicate the authenticated user.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  Method: people.people.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 *    @c kGTLRAuthScopePeopleServiceDirectoryReadonly
 *    @c kGTLRAuthScopePeopleServiceUserAddressesRead
 *    @c kGTLRAuthScopePeopleServiceUserBirthdayRead
 *    @c kGTLRAuthScopePeopleServiceUserEmailsRead
 *    @c kGTLRAuthScopePeopleServiceUserGenderRead
 *    @c kGTLRAuthScopePeopleServiceUserinfoEmail
 *    @c kGTLRAuthScopePeopleServiceUserinfoProfile
 *    @c kGTLRAuthScopePeopleServiceUserOrganizationRead
 *    @c kGTLRAuthScopePeopleServiceUserPhonenumbersRead
 */
@interface GTLRPeopleServiceQuery_PeopleGet : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleGetWithresourceName:]

/**
 *  Required. A field mask to restrict which fields on the person are returned.
 *  Multiple
 *  fields can be specified by separating them with commas. Valid values are:
 *  * addresses
 *  * ageRanges
 *  * biographies
 *  * birthdays
 *  * coverPhotos
 *  * emailAddresses
 *  * events
 *  * genders
 *  * imClients
 *  * interests
 *  * locales
 *  * memberships
 *  * metadata
 *  * names
 *  * nicknames
 *  * occupations
 *  * organizations
 *  * phoneNumbers
 *  * photos
 *  * relations
 *  * residences
 *  * sipAddresses
 *  * skills
 *  * urls
 *  * userDefined
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *personFields;

/**
 *  Required. Comma-separated list of person fields to be included in the
 *  response. Each
 *  path should start with `person.`: for example, `person.names` or
 *  `person.photos`.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *requestMaskIncludeField;

/**
 *  Required. The resource name of the person to provide information about.
 *  - To get information about the authenticated user, specify `people/me`.
 *  - To get information about a google account, specify
 *  `people/{account_id}`.
 *  - To get information about a contact, specify the resource name that
 *  identifies the contact as returned by
 *  [`people.connections.list`](/people/api/rest/v1/people.connections/list).
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_Person.
 *
 *  Provides information about a person by specifying a resource name. Use
 *  `people/me` to indicate the authenticated user.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  @param resourceName Required. The resource name of the person to provide
 *    information about.
 *    - To get information about the authenticated user, specify `people/me`.
 *    - To get information about a google account, specify
 *    `people/{account_id}`.
 *    - To get information about a contact, specify the resource name that
 *    identifies the contact as returned by
 *    [`people.connections.list`](/people/api/rest/v1/people.connections/list).
 *
 *  @return GTLRPeopleServiceQuery_PeopleGet
 */
+ (instancetype)queryWithResourceName:(NSString *)resourceName;

@end

/**
 *  Provides information about a list of specific people by specifying a list
 *  of requested resource names. Use `people/me` to indicate the authenticated
 *  user.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  Method: people.people.getBatchGet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 *    @c kGTLRAuthScopePeopleServiceContactsReadonly
 *    @c kGTLRAuthScopePeopleServiceDirectoryReadonly
 *    @c kGTLRAuthScopePeopleServiceUserAddressesRead
 *    @c kGTLRAuthScopePeopleServiceUserBirthdayRead
 *    @c kGTLRAuthScopePeopleServiceUserEmailsRead
 *    @c kGTLRAuthScopePeopleServiceUserGenderRead
 *    @c kGTLRAuthScopePeopleServiceUserinfoEmail
 *    @c kGTLRAuthScopePeopleServiceUserinfoProfile
 *    @c kGTLRAuthScopePeopleServiceUserOrganizationRead
 *    @c kGTLRAuthScopePeopleServiceUserPhonenumbersRead
 */
@interface GTLRPeopleServiceQuery_PeopleGetBatchGet : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleGetBatchGet]

/**
 *  Required. A field mask to restrict which fields on each person are returned.
 *  Multiple
 *  fields can be specified by separating them with commas. Valid values are:
 *  * addresses
 *  * ageRanges
 *  * biographies
 *  * birthdays
 *  * coverPhotos
 *  * emailAddresses
 *  * events
 *  * genders
 *  * imClients
 *  * interests
 *  * locales
 *  * memberships
 *  * metadata
 *  * names
 *  * nicknames
 *  * occupations
 *  * organizations
 *  * phoneNumbers
 *  * photos
 *  * relations
 *  * residences
 *  * sipAddresses
 *  * skills
 *  * urls
 *  * userDefined
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *personFields;

/**
 *  Required. Comma-separated list of person fields to be included in the
 *  response. Each
 *  path should start with `person.`: for example, `person.names` or
 *  `person.photos`.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *requestMaskIncludeField;

/**
 *  Required. The resource names of the people to provide information about.
 *  - To get information about the authenticated user, specify `people/me`.
 *  - To get information about a google account, specify
 *  `people/{account_id}`.
 *  - To get information about a contact, specify the resource name that
 *  identifies the contact as returned by
 *  [`people.connections.list`](/people/api/rest/v1/people.connections/list).
 *  You can include up to 50 resource names in one request.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resourceNames;

/**
 *  Fetches a @c GTLRPeopleService_GetPeopleResponse.
 *
 *  Provides information about a list of specific people by specifying a list
 *  of requested resource names. Use `people/me` to indicate the authenticated
 *  user.
 *  The request throws a 400 error if 'personFields' is not specified.
 *
 *  @return GTLRPeopleServiceQuery_PeopleGetBatchGet
 */
+ (instancetype)query;

@end

/**
 *  Update contact data for an existing contact person. Any non-contact data
 *  will not be modified.
 *  The request throws a 400 error if `updatePersonFields` is not specified.
 *  The request throws a 400 error if `person.metadata.sources` is not
 *  specified for the contact to be updated.
 *  The request throws a 400 error with an error with reason
 *  `"failedPrecondition"` if `person.metadata.sources.etag` is different than
 *  the contact's etag, which indicates the contact has changed since its data
 *  was read. Clients should get the latest person and re-apply their updates
 *  to the latest person.
 *
 *  Method: people.people.updateContact
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_PeopleUpdateContact : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleUpdateContactWithObject:resourceName:]

/**
 *  The resource name for the person, assigned by the server. An ASCII string
 *  with a max length of 27 characters, in the form of
 *  `people/{person_id}`.
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Required. A field mask to restrict which fields on the person are updated.
 *  Multiple
 *  fields can be specified by separating them with commas.
 *  All updated fields will be replaced. Valid values are:
 *  * addresses
 *  * biographies
 *  * birthdays
 *  * emailAddresses
 *  * events
 *  * genders
 *  * imClients
 *  * interests
 *  * locales
 *  * memberships
 *  * names
 *  * nicknames
 *  * occupations
 *  * organizations
 *  * phoneNumbers
 *  * relations
 *  * residences
 *  * sipAddresses
 *  * urls
 *  * userDefined
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updatePersonFields;

/**
 *  Fetches a @c GTLRPeopleService_Person.
 *
 *  Update contact data for an existing contact person. Any non-contact data
 *  will not be modified.
 *  The request throws a 400 error if `updatePersonFields` is not specified.
 *  The request throws a 400 error if `person.metadata.sources` is not
 *  specified for the contact to be updated.
 *  The request throws a 400 error with an error with reason
 *  `"failedPrecondition"` if `person.metadata.sources.etag` is different than
 *  the contact's etag, which indicates the contact has changed since its data
 *  was read. Clients should get the latest person and re-apply their updates
 *  to the latest person.
 *
 *  @param object The @c GTLRPeopleService_Person to include in the query.
 *  @param resourceName The resource name for the person, assigned by the
 *    server. An ASCII string
 *    with a max length of 27 characters, in the form of
 *    `people/{person_id}`.
 *
 *  @return GTLRPeopleServiceQuery_PeopleUpdateContact
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_Person *)object
                   resourceName:(NSString *)resourceName;

@end

/**
 *  Update a contact's photo.
 *
 *  Method: people.people.updateContactPhoto
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePeopleServiceContacts
 */
@interface GTLRPeopleServiceQuery_PeopleUpdateContactPhoto : GTLRPeopleServiceQuery
// Previous library name was
//   +[GTLQueryPeopleService queryForPeopleUpdateContactPhotoWithObject:resourceName:]

/** Required. Person resource name */
@property(nonatomic, copy, nullable) NSString *resourceName;

/**
 *  Fetches a @c GTLRPeopleService_UpdateContactPhotoResponse.
 *
 *  Update a contact's photo.
 *
 *  @param object The @c GTLRPeopleService_UpdateContactPhotoRequest to include
 *    in the query.
 *  @param resourceName Required. Person resource name
 *
 *  @return GTLRPeopleServiceQuery_PeopleUpdateContactPhoto
 */
+ (instancetype)queryWithObject:(GTLRPeopleService_UpdateContactPhotoRequest *)object
                   resourceName:(NSString *)resourceName;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
