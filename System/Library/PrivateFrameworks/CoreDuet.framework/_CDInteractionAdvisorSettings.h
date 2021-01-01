/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSSet;

@interface _CDInteractionAdvisorSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useFuture;
	BOOL _aggregateByIdentifier;
	BOOL _requireOutgoingInteraction;
	NSDate* _interactionDate;
	NSString* _interactionTitle;
	NSSet* _seedIdentifiers;
	NSString* _interactionLocationUUID;
	NSString* _contactPrefix;
	NSSet* _constrainDirections;
	NSSet* _constrainMechanisms;
	NSSet* _constrainBundleIds;
	NSSet* _constrainAccounts;
	NSSet* _constrainDomainIdentifiers;
	NSSet* _constrainLocationUUIDs;
	NSSet* _constrainSenders;
	NSSet* _constrainRecipients;
	NSSet* _constrainKeywords;
	NSSet* _constrainIdentifiers;
	NSSet* _constrainPersonIds;
	NSSet* _constrainPersonIdType;
	long long _constrainMaxRecipientCount;
	unsigned long long _resultLimit;
	NSSet* _ignoreContactIdentifiers;
	NSSet* _ignoreInteractionUUIDs;
	NSString* _consumerIdentifier;
	NSString* _callerBundleId;

}

@property (retain) NSString * callerBundleId;                            //@synthesize callerBundleId=_callerBundleId - In the implementation block
@property (retain) NSDate * interactionDate;                             //@synthesize interactionDate=_interactionDate - In the implementation block
@property (retain) NSString * interactionTitle;                          //@synthesize interactionTitle=_interactionTitle - In the implementation block
@property (retain) NSSet * seedIdentifiers;                              //@synthesize seedIdentifiers=_seedIdentifiers - In the implementation block
@property (retain) NSString * interactionLocationUUID;                   //@synthesize interactionLocationUUID=_interactionLocationUUID - In the implementation block
@property (retain) NSString * contactPrefix;                             //@synthesize contactPrefix=_contactPrefix - In the implementation block
@property (retain) NSSet * constrainDirections;                          //@synthesize constrainDirections=_constrainDirections - In the implementation block
@property (retain) NSSet * constrainMechanisms;                          //@synthesize constrainMechanisms=_constrainMechanisms - In the implementation block
@property (retain) NSSet * constrainBundleIds;                           //@synthesize constrainBundleIds=_constrainBundleIds - In the implementation block
@property (retain) NSSet * constrainAccounts;                            //@synthesize constrainAccounts=_constrainAccounts - In the implementation block
@property (retain) NSSet * constrainDomainIdentifiers;                   //@synthesize constrainDomainIdentifiers=_constrainDomainIdentifiers - In the implementation block
@property (retain) NSSet * constrainLocationUUIDs;                       //@synthesize constrainLocationUUIDs=_constrainLocationUUIDs - In the implementation block
@property (retain) NSSet * constrainSenders;                             //@synthesize constrainSenders=_constrainSenders - In the implementation block
@property (retain) NSSet * constrainRecipients;                          //@synthesize constrainRecipients=_constrainRecipients - In the implementation block
@property (retain) NSSet * constrainKeywords;                            //@synthesize constrainKeywords=_constrainKeywords - In the implementation block
@property (retain) NSSet * constrainIdentifiers;                         //@synthesize constrainIdentifiers=_constrainIdentifiers - In the implementation block
@property (retain) NSSet * constrainPersonIds;                           //@synthesize constrainPersonIds=_constrainPersonIds - In the implementation block
@property (retain) NSSet * constrainPersonIdType;                        //@synthesize constrainPersonIdType=_constrainPersonIdType - In the implementation block
@property (assign) long long constrainMaxRecipientCount;                 //@synthesize constrainMaxRecipientCount=_constrainMaxRecipientCount - In the implementation block
@property (assign) unsigned long long resultLimit;                       //@synthesize resultLimit=_resultLimit - In the implementation block
@property (assign) BOOL useFuture;                                       //@synthesize useFuture=_useFuture - In the implementation block
@property (assign) BOOL aggregateByIdentifier;                           //@synthesize aggregateByIdentifier=_aggregateByIdentifier - In the implementation block
@property (assign) BOOL requireOutgoingInteraction;                      //@synthesize requireOutgoingInteraction=_requireOutgoingInteraction - In the implementation block
@property (retain) NSSet * ignoreContactIdentifiers;                     //@synthesize ignoreContactIdentifiers=_ignoreContactIdentifiers - In the implementation block
@property (retain) NSSet * ignoreInteractionUUIDs;                       //@synthesize ignoreInteractionUUIDs=_ignoreInteractionUUIDs - In the implementation block
@property (nonatomic,retain) NSString * consumerIdentifier;              //@synthesize consumerIdentifier=_consumerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)interactionAdvisorSettingsDefault;
+(id)extractContactIdentifiers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)constrainAccounts;
-(NSSet *)constrainKeywords;
-(void)setConstrainKeywords:(NSSet *)arg1 ;
-(id)interactionPredicate;
-(unsigned long long)resultLimit;
-(BOOL)requireOutgoingInteraction;
-(void)setRequireOutgoingInteraction:(BOOL)arg1 ;
-(void)setInteractionDate:(NSDate *)arg1 ;
-(void)setConstrainMechanisms:(NSSet *)arg1 ;
-(void)setConstrainIdentifiers:(NSSet *)arg1 ;
-(void)setConsumerIdentifier:(NSString *)arg1 ;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(void)setConstrainPersonIds:(NSSet *)arg1 ;
-(void)setContactPrefix:(NSString *)arg1 ;
-(NSSet *)seedIdentifiers;
-(NSDate *)interactionDate;
-(void)setInteractionLocationUUID:(NSString *)arg1 ;
-(NSString *)contactPrefix;
-(NSString *)consumerIdentifier;
-(NSString *)callerBundleId;
-(NSSet *)constrainMechanisms;
-(NSSet *)constrainPersonIds;
-(NSSet *)constrainIdentifiers;
-(void)setConstrainMaxRecipientCount:(long long)arg1 ;
-(NSString *)interactionTitle;
-(NSSet *)constrainPersonIdType;
-(NSString *)interactionLocationUUID;
-(id)contactPredicate;
-(BOOL)useFuture;
-(NSSet *)ignoreContactIdentifiers;
-(BOOL)aggregateByIdentifier;
-(void)setInteractionTitle:(NSString *)arg1 ;
-(void)setSeedIdentifiers:(NSSet *)arg1 ;
-(void)setConstrainAccounts:(NSSet *)arg1 ;
-(NSSet *)constrainBundleIds;
-(void)setConstrainBundleIds:(NSSet *)arg1 ;
-(NSSet *)constrainDomainIdentifiers;
-(void)setConstrainDomainIdentifiers:(NSSet *)arg1 ;
-(void)setConstrainPersonIdType:(NSSet *)arg1 ;
-(void)setIgnoreContactIdentifiers:(NSSet *)arg1 ;
-(void)setUseFuture:(BOOL)arg1 ;
-(void)setAggregateByIdentifier:(BOOL)arg1 ;
-(long long)constrainMaxRecipientCount;
-(NSSet *)constrainDirections;
-(void)setConstrainDirections:(NSSet *)arg1 ;
-(NSSet *)constrainSenders;
-(void)setConstrainSenders:(NSSet *)arg1 ;
-(NSSet *)constrainRecipients;
-(void)setConstrainRecipients:(NSSet *)arg1 ;
-(NSSet *)constrainLocationUUIDs;
-(void)setConstrainLocationUUIDs:(NSSet *)arg1 ;
-(NSSet *)ignoreInteractionUUIDs;
-(void)setIgnoreInteractionUUIDs:(NSSet *)arg1 ;
-(void)setCallerBundleId:(NSString *)arg1 ;
@end

