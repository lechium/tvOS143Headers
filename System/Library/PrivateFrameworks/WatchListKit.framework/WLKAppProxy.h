/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WLKAppProxy : NSObject <NSSecureCoding> {

	BOOL _isEntitled;
	BOOL _isBetaApp;
	BOOL _isAppStoreVendable;
	BOOL _isSystemApp;
	BOOL _supportsTVApp;
	NSString* _bundleIdentifier;
	NSString* _version;
	NSString* _subscriptionInfo;
	NSNumber* _itemID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL isEntitled;                               //@synthesize isEntitled=_isEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isBetaApp;                                //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (nonatomic,readonly) BOOL isAppStoreVendable;                       //@synthesize isAppStoreVendable=_isAppStoreVendable - In the implementation block
@property (nonatomic,readonly) BOOL isSystemApp;                              //@synthesize isSystemApp=_isSystemApp - In the implementation block
@property (nonatomic,readonly) BOOL isTVApp; 
@property (nonatomic,readonly) BOOL supportsTVApp;                            //@synthesize supportsTVApp=_supportsTVApp - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(NSNumber *)itemID;
-(BOOL)isBetaApp;
-(BOOL)isEntitled;
-(NSString *)subscriptionInfo;
-(BOOL)isSystemApp;
-(BOOL)isTVApp;
-(BOOL)isAppStoreVendable;
-(BOOL)supportsTVApp;
@end

