/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding> {

	NSMutableDictionary* _store;

}

@property (nonatomic,retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
+(id)loadCredentialsFromAppDefaults;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)store;
-(void)clearAllCredentials;
-(void)addCredentials:(id)arg1 ;
-(id)credentialsForHost:(id)arg1 ;
-(void)removeCredentials:(id)arg1 ;
@end

