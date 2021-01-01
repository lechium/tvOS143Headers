/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSString* _phoneNumber;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSNumber * DSID;                              //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)phoneNumber;
-(id)stringRepresentation;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(BOOL)arg2 ;
-(id)dictionaryRepresentationIncludingDSID:(BOOL)arg1 ;
@end

