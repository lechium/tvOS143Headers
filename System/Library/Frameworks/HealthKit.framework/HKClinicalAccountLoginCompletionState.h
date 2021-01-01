/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding> {

	BOOL _wasRelogin;
	HKClinicalAccount* _account;
	NSNumber* _alternateCredentialPersistentID;

}

@property (nonatomic,readonly) HKClinicalAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSNumber * alternateCredentialPersistentID;              //@synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID - In the implementation block
@property (nonatomic,readonly) BOOL wasRelogin;                                     //@synthesize wasRelogin=_wasRelogin - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKClinicalAccount *)account;
-(id)initWithAccount:(id)arg1 wasRelogin:(BOOL)arg2 ;
-(NSNumber *)alternateCredentialPersistentID;
-(void)setAlternateCredentialPersistentID:(NSNumber *)arg1 ;
-(BOOL)wasRelogin;
@end
