/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>
#import <libobjc.A.dylib/PGPersonResult.h>
#import <libobjc.A.dylib/PGGraphIngestPerson.h>

@class NSString, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSArray;

@interface CLSPersonIdentity : CLSPrimitive <PGPersonResult, PGGraphIngestPerson> {

	NSMutableArray* _homeAddresses;
	NSMutableArray* _workAddresses;
	BOOL _isFavorite;
	BOOL _isUserCreated;
	BOOL _hasContactProfilePicture;
	BOOL _hasPhoneNumber;
	NSString* _PHIdentifier;
	NSString* _CNIdentifier;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nickname;
	unsigned long long _sex;
	unsigned long long _ageCategory;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;
	NSDate* _anniversaryDate;
	NSString* _companyName;
	NSMutableDictionary* _socialProfiles;
	NSSet* _emailAddresses;
	NSSet* _phoneNumbers;
	unsigned long long _relationship;
	NSArray* _sourceURLs;
	NSString* _inferredLastName;

}

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@property (nonatomic,retain) NSString * inferredLastName;                           //@synthesize inferredLastName=_inferredLastName - In the implementation block
@property (nonatomic,retain) NSString * CNIdentifier;                               //@synthesize CNIdentifier=_CNIdentifier - In the implementation block
@property (nonatomic,retain) NSString * PHIdentifier;                               //@synthesize PHIdentifier=_PHIdentifier - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                                 //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * nickname;                                   //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSDate * birthdayDate;                                 //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (nonatomic,retain) NSDate * potentialBirthdayDate;                        //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
@property (nonatomic,retain) NSDate * anniversaryDate;                              //@synthesize anniversaryDate=_anniversaryDate - In the implementation block
@property (nonatomic,retain) NSString * companyName;                                //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * socialProfiles;                  //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) NSSet * emailAddresses;                                //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSSet * phoneNumbers;                                  //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,nonatomic) unsigned long long relationship;                       //@synthesize relationship=_relationship - In the implementation block
@property (assign,nonatomic) unsigned long long sex;                                //@synthesize sex=_sex - In the implementation block
@property (assign,nonatomic) unsigned long long ageCategory;                        //@synthesize ageCategory=_ageCategory - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                       //@synthesize isFavorite=_isFavorite - In the implementation block
@property (assign,nonatomic) BOOL isUserCreated;                                    //@synthesize isUserCreated=_isUserCreated - In the implementation block
@property (assign,nonatomic) BOOL hasContactProfilePicture;                         //@synthesize hasContactProfilePicture=_hasContactProfilePicture - In the implementation block
@property (assign,nonatomic) BOOL hasPhoneNumber;                                   //@synthesize hasPhoneNumber=_hasPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSArray * sourceURLs;                                //@synthesize sourceURLs=_sourceURLs - In the implementation block
+(unsigned long long)type;
+(BOOL)supportsSecureCoding;
+(id)person;
+(id)relationshipRegularExpressionForRelationship:(unsigned long long)arg1 locale:(id)arg2 ;
+(id)personWithCNIdentifier:(id)arg1 ;
+(id)personWithPHIdentifier:(id)arg1 ;
+(id)personWithPHPerson:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 withScores:(id)arg2 ;
+(BOOL)isParentRelationship:(unsigned long long)arg1 ;
+(BOOL)isChildRelationship:(unsigned long long)arg1 ;
+(BOOL)isSiblingRelationship:(unsigned long long)arg1 ;
+(BOOL)isFamilyRelationship:(unsigned long long)arg1 ;
+(id)_personRelationshipVocabularyByLocaleDictionary;
+(id)descriptionForPersonRelationship:(unsigned long long)arg1 ;
-(NSString *)UUID;
-(NSString *)contactIdentifier;
-(NSString *)contactID;
-(BOOL)isVerified;
-(NSString *)localIdentifier;
-(NSString *)keywordDescription;
-(long long)compareToPerson:(id)arg1 ;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;
-(NSDictionary *)locationsByAddressTypes;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(unsigned long long)relationship;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSSet *)phoneNumbers;
-(BOOL)isMe;
-(BOOL)hasPhoneNumber;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(NSSet *)emailAddresses;
-(BOOL)isUserCreated;
-(void)setPhoneNumbers:(NSSet *)arg1 ;
-(void)setEmailAddresses:(NSSet *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setRelationship:(unsigned long long)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)companyName;
-(NSMutableDictionary *)socialProfiles;
-(void)setSocialProfiles:(NSMutableDictionary *)arg1 ;
-(NSArray *)sourceURLs;
-(unsigned long long)ageCategory;
-(void)setAgeCategory:(unsigned long long)arg1 ;
-(BOOL)hasContactProfilePicture;
-(NSString *)CNIdentifier;
-(BOOL)isOrganization;
-(BOOL)isSamePersonAs:(id)arg1 ;
-(void)mergeWithPerson:(id)arg1 ;
-(id)_addressArrayFromAddressType:(unsigned long long)arg1 ;
-(void)addAddresses:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_enumerateAddresses:(id)arg1 as:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)prefetchPersonAddressesIfNeeded;
-(unsigned long long)countOfAddressesOfType:(unsigned long long)arg1 ;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asCLLocationsWithBlock:(/*^block*/id)arg2 ;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asPlacemarkWithBlock:(/*^block*/id)arg2 ;
-(void)sanitize;
-(id)_relationshipAsString;
-(id)presentationString;
-(id)pluralPresentationString;
-(void)setSourceService:(id)arg1 andID:(id)arg2 ;
-(BOOL)isEqualToPerson:(id)arg1 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 closeToAddressesOfType:(unsigned long long)arg2 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 farAwayFromAddressesOfType:(unsigned long long)arg2 ;
-(BOOL)hasSameFamilyNameAsPerson:(id)arg1 ;
-(NSString *)inferredLastName;
-(unsigned long long)relationshipHintFromNameUsingLocales:(id)arg1 ;
-(id)_motherAndFatherRelationships;
-(NSString *)PHIdentifier;
-(void)setPHIdentifier:(NSString *)arg1 ;
-(void)setCNIdentifier:(NSString *)arg1 ;
-(unsigned long long)sex;
-(void)setSex:(unsigned long long)arg1 ;
-(NSDate *)birthdayDate;
-(void)setBirthdayDate:(NSDate *)arg1 ;
-(NSDate *)potentialBirthdayDate;
-(void)setPotentialBirthdayDate:(NSDate *)arg1 ;
-(NSDate *)anniversaryDate;
-(void)setAnniversaryDate:(NSDate *)arg1 ;
-(void)setIsUserCreated:(BOOL)arg1 ;
-(void)setHasContactProfilePicture:(BOOL)arg1 ;
-(void)setHasPhoneNumber:(BOOL)arg1 ;
-(void)setInferredLastName:(NSString *)arg1 ;
@end

