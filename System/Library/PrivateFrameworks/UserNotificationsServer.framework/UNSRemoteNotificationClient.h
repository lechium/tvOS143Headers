/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding> {

	NSString* _tokenIdentifier;
	NSString* _environment;
	NSData* _lastKnownDeviceToken;

}

@property (nonatomic,copy) NSString * tokenIdentifier;                 //@synthesize tokenIdentifier=_tokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environment;                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSData * lastKnownDeviceToken;              //@synthesize lastKnownDeviceToken=_lastKnownDeviceToken - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)tokenIdentifier;
-(NSData *)lastKnownDeviceToken;
-(void)setLastKnownDeviceToken:(NSData *)arg1 ;
-(void)setTokenIdentifier:(NSString *)arg1 ;
@end

