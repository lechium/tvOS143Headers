/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AKToken.h>

@class NSMutableDictionary, NSData, NSString;

@interface AKMasterToken : AKToken {

	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSData * sessionKey; 
@property (nonatomic,readonly) NSData * encryptedSessionKey; 
@property (nonatomic,readonly) NSData * externalizedVersion; 
@property (nonatomic,readonly) NSString * externalizedVersionString; 
+(id)tokenWithExternalizedVersionString:(id)arg1 ;
+(id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2 ;
-(id)init;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)_setSessionKey:(id)arg1 ;
-(void)_setEncryptedSessionKey:(id)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(NSData *)externalizedVersion;
-(BOOL)updateWithHTTPURLResponse:(id)arg1 ;
-(NSData *)sessionKey;
-(NSData *)encryptedSessionKey;
-(NSString *)externalizedVersionString;
@end

