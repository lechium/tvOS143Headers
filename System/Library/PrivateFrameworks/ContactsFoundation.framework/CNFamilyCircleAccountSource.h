/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNDelegateAccountSource.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource> {

	FAFamilyCircle* _familyCircle;

}

@property (nonatomic,readonly) FAFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(FAFamilyCircle *)familyCircle;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)delegateAccounts;
-(id)primaryAccount;
-(id)myFamilyMemberRecord;
@end

