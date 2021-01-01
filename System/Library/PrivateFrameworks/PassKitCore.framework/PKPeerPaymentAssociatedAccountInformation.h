/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDate;

@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding> {

	BOOL _associatedAccountStateDirty;
	NSSet* _associatedAccounts;
	NSSet* _associatedAccountInvitations;
	NSSet* _associatedAccountRemovalRecords;
	double _proactiveAssociatedAccountFetchPeriod;
	NSDate* _lastUpdated;
	NSDate* _nextPossibleFetchDate;
	long long _backoffRetryLevel;

}

@property (nonatomic,copy) NSSet * associatedAccounts;                                                           //@synthesize associatedAccounts=_associatedAccounts - In the implementation block
@property (nonatomic,copy) NSSet * associatedAccountInvitations;                                                 //@synthesize associatedAccountInvitations=_associatedAccountInvitations - In the implementation block
@property (nonatomic,copy) NSSet * associatedAccountRemovalRecords;                                              //@synthesize associatedAccountRemovalRecords=_associatedAccountRemovalRecords - In the implementation block
@property (assign,nonatomic) double proactiveAssociatedAccountFetchPeriod;                                       //@synthesize proactiveAssociatedAccountFetchPeriod=_proactiveAssociatedAccountFetchPeriod - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                                                 //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,retain) NSDate * nextPossibleFetchDate;                                                     //@synthesize nextPossibleFetchDate=_nextPossibleFetchDate - In the implementation block
@property (assign,nonatomic) long long backoffRetryLevel;                                                        //@synthesize backoffRetryLevel=_backoffRetryLevel - In the implementation block
@property (assign,getter=isAssociatedAccountStateDirty,nonatomic) BOOL associatedAccountStateDirty;              //@synthesize associatedAccountStateDirty=_associatedAccountStateDirty - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(NSSet *)associatedAccounts;
-(void)setAssociatedAccounts:(NSSet *)arg1 ;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(void)enumerateAssociatedAccountsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAccountInvitationsUsingBlock:(/*^block*/id)arg1 ;
-(double)proactiveAssociatedAccountFetchPeriod;
-(NSSet *)associatedAccountRemovalRecords;
-(void)markAssociatedAccountRemovalRecordWithAltDSID:(id)arg1 hasPresentedNotification:(BOOL)arg2 ;
-(NSDate *)nextPossibleFetchDate;
-(void)setNextPossibleFetchDate:(NSDate *)arg1 ;
-(long long)backoffRetryLevel;
-(void)setBackoffRetryLevel:(long long)arg1 ;
-(void)markAssociatedAccountActiveWithAltDSID:(id)arg1 hasPresentedNotification:(BOOL)arg2 ;
-(NSSet *)associatedAccountInvitations;
-(void)setAssociatedAccountInvitations:(NSSet *)arg1 ;
-(void)setAssociatedAccountRemovalRecords:(NSSet *)arg1 ;
-(void)setProactiveAssociatedAccountFetchPeriod:(double)arg1 ;
-(BOOL)isAssociatedAccountStateDirty;
-(void)setAssociatedAccountStateDirty:(BOOL)arg1 ;
@end

