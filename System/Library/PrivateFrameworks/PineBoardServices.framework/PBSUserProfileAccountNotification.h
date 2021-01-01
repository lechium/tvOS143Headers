/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PBSUserProfileAccountNotification : NSObject <NSSecureCoding> {

	unsigned long long _type;
	NSString* _accountIdentifier;
	NSString* _accountTypeIdentifier;
	NSString* _altDSID;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeIdentifier;              //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                            //@synthesize altDSID=_altDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)altDSID;
-(NSString *)accountIdentifier;
-(NSString *)accountTypeIdentifier;
-(id)initWithType:(unsigned long long)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 altDSID:(id)arg4 ;
@end
