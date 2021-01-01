/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding> {

	ENAccountIdentity* _accountIdentity;
	NSArray* _participants;
	NSData* _sharedApplicationData;

}

@property (retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,retain) NSArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSData * sharedApplicationData;              //@synthesize sharedApplicationData=_sharedApplicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(ENAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3 ;
-(NSData *)sharedApplicationData;
-(void)setSharedApplicationData:(NSData *)arg1 ;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
@end

