/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface PPTTLDeletionPolicyRule : NSObject {

	NSString* _bundleIdentifier;
	NSString* _groupIdentifier;
	NSNumber* _maxAgeSeconds;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAgeSeconds;                 //@synthesize maxAgeSeconds=_maxAgeSeconds - In the implementation block
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)groupIdentifier;
-(NSNumber *)maxAgeSeconds;
-(id)initWithBundleIdentifier:(id)arg1 groupIdentifier:(id)arg2 maxAgeSeconds:(id)arg3 ;
@end

