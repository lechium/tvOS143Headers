/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ATVConflictResolverEntry : NSObject {

	NSString* _keyPrefix;
	/*^block*/id _conflictResolver;

}

@property (nonatomic,readonly) NSString * keyPrefix;              //@synthesize keyPrefix=_keyPrefix - In the implementation block
@property (nonatomic,readonly) id conflictResolver;               //@synthesize conflictResolver=_conflictResolver - In the implementation block
-(id)initWithKeyPrefix:(id)arg1 conflictResolver:(/*^block*/id)arg2 ;
-(NSString *)keyPrefix;
-(id)conflictResolver;
@end

